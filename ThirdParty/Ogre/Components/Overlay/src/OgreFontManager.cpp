/*-------------------------------------------------------------------------
This source file is a part of OGRE
(Object-oriented Graphics Rendering Engine)

For the latest info, see http://www.ogre3d.org/

Copyright (c) 2000-2014 Torus Knot Software Ltd
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE
-------------------------------------------------------------------------*/

#include "OgreFontManager.h"

#include "OgreResourceGroupManager.h"
#include "OgreScriptCompiler.h"

//////////////// BEGIN DI_MODIFICATION ////////////////
#include <Shlobj.h>
#include <Shlobj_core.h>
///////////////// END DI_MODIFICATION /////////////////

namespace Ogre
{
    //---------------------------------------------------------------------
    template<> FontManager * Singleton< FontManager >::msSingleton = 0;
    FontManager* FontManager::getSingletonPtr(void)
    {
        return msSingleton;
    }
    FontManager& FontManager::getSingleton(void)
    {  
        assert( msSingleton );  return ( *msSingleton );  
    }
    //---------------------------------------------------------------------
    FontManager::FontManager() : ResourceManager()
    {
        // Loading order
        mLoadOrder = 200.0f;
        // Scripting is supported by this manager
        mScriptPatterns.push_back("*.fontdef");
        // Register scripting with resource group manager
        ResourceGroupManager::getSingleton()._registerScriptLoader(this);

        // Resource type
        mResourceType = "Font";

        // Register with resource group manager
        ResourceGroupManager::getSingleton()._registerResourceManager(mResourceType, this);
    }
    //---------------------------------------------------------------------
    FontManager::~FontManager()
    {
        // Unregister with resource group manager
        ResourceGroupManager::getSingleton()._unregisterResourceManager(mResourceType);
        // Unegister scripting with resource group manager
        ResourceGroupManager::getSingleton()._unregisterScriptLoader(this);

    }
    //---------------------------------------------------------------------
    Resource* FontManager::createImpl(const String& name, ResourceHandle handle, 
        const String& group, bool isManual, ManualResourceLoader* loader,
        const NameValuePairList* params)
    {
        return OGRE_NEW Font(this, name, handle, group, isManual, loader);
    }
    //-----------------------------------------------------------------------
    FontPtr FontManager::getByName(const String& name, const String& groupName)
    {
        return static_pointer_cast<Font>(getResourceByName(name, groupName));
    }
    //---------------------------------------------------------------------
    FontPtr FontManager::create (const String& name, const String& group,
                                    bool isManual, ManualResourceLoader* loader,
                                    const NameValuePairList* createParams)
    {
        return static_pointer_cast<Font>(createResource(name,group,isManual,loader,createParams));
    }
    //---------------------------------------------------------------------
    void FontManager::parseScript(DataStreamPtr& stream, const String& groupName)
    {
        ScriptCompilerManager::getSingleton().parseScript(stream, groupName);
    }

    //////////////// BEGIN DI_MODIFICATION ////////////////
    // Get system font file path. https://stackoverflow.com/questions/11387564/get-a-font-filepath-from-name-and-style-in-c-windows
    // faceName like "Arial", "Broadway", etc
    static String GetSystemFontFile(const String& faceName)
    {
        static const LPWSTR fontRegistryPath = L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Fonts";
        HKEY hKey;
        LONG result;
        std::wstring wsFaceName(faceName.begin(), faceName.end());

        // Open Windows font registry key
        result = RegOpenKeyExW(HKEY_LOCAL_MACHINE, fontRegistryPath, 0, KEY_READ, &hKey);
        if (result != ERROR_SUCCESS) {
            return "";
        }

        DWORD maxValueNameSize, maxValueDataSize;
        result = RegQueryInfoKey(hKey, 0, 0, 0, 0, 0, 0, 0, &maxValueNameSize, &maxValueDataSize, 0, 0);
        if (result != ERROR_SUCCESS) {
            return "";
        }

        DWORD valueIndex = 0;
        LPWSTR valueName = new WCHAR[maxValueNameSize];
        LPBYTE valueData = new BYTE[maxValueDataSize];
        DWORD valueNameSize, valueDataSize, valueType;
        std::wstring wsFontFile;

        // Look for a matching font name
        do {
            wsFontFile.clear();
            valueDataSize = maxValueDataSize;
            valueNameSize = maxValueNameSize;

            result = RegEnumValueW(hKey, valueIndex, valueName, &valueNameSize, 0, &valueType, valueData, &valueDataSize);

            valueIndex++;

            if (result != ERROR_SUCCESS || valueType != REG_SZ) {
                continue;
            }

            std::wstring wsValueName(valueName, valueNameSize);

            // Found a match
            if (_wcsnicmp(wsFaceName.c_str(), wsValueName.c_str(), wsFaceName.length()) == 0) {

                wsFontFile.assign((LPWSTR)valueData, valueDataSize);
                break;
            }
        } while (result != ERROR_NO_MORE_ITEMS);

        delete[] valueName;
        delete[] valueData;

        RegCloseKey(hKey);

        if (wsFontFile.empty()) {
            return "";
        }

        // Build full font file path
        PWSTR szPath[MAX_PATH];

        if (!SUCCEEDED(SHGetKnownFolderPath(
            FOLDERID_Fonts, //REFKNOWNFOLDERID rfid,
            0,              //DWORD            dwFlags,
            NULL,           //HANDLE           hToken,
            szPath)))
            return "";

        std::wstring wFontsFolder = std::wstring(szPath[0]);

        std::wstringstream ss;
        ss << wFontsFolder << "\\" << wsFontFile;
        std::wstring wsTtfPath = ss.str();

        return std::string(wsTtfPath.begin(), wsTtfPath.end());
    }
    //---------------------------------------------------------------------
    FontPtr FontManager::LoadWindowsFont(const String& fontName, Real ttfSize, uint ttfResolution)
    {
        FontPtr pFont;

        String strTtf = GetSystemFontFile(fontName);

        if (!strTtf.empty())
        {
            Ogre::String ogreFontName = fontName + "_" + std::to_string((int)ttfSize);
            pFont = create(ogreFontName, String("Essential"));
            pFont->setSource(strTtf);
            pFont->setTrueTypeSize(ttfSize);
            pFont->setTrueTypeResolution(ttfResolution);

            pFont->LoadWindowsFont();
        }
        return pFont;
    }
    ///////////////// END DI_MODIFICATION /////////////////
}
