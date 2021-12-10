// Copyright (c) 2013-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#include <Aspect_DisplayConnection.hxx>

#include <Aspect_DisplayConnectionDefinitionError.hxx>
#include <OSD_Environment.hxx>


IMPLEMENT_STANDARD_RTTIEXT(Aspect_DisplayConnection,Standard_Transient)

// =======================================================================
// function : Aspect_DisplayConnection
// purpose  :
// =======================================================================
Aspect_DisplayConnection::Aspect_DisplayConnection()
{
#if !defined(_WIN32) && (!defined(__APPLE__) || defined(MACOSX_USE_GLX)) && !defined(__ANDROID__) && !defined(__QNX__) && !defined(__EMSCRIPTEN__)
  myDisplay = NULL;
  myIsOwnDisplay = false;
  OSD_Environment anEnv ("DISPLAY");
  myDisplayName = anEnv.Value();
  Init (NULL);
#endif
}

// =======================================================================
// function : ~Aspect_DisplayConnection
// purpose  :
// =======================================================================
Aspect_DisplayConnection::~Aspect_DisplayConnection()
{
#if !defined(_WIN32) && (!defined(__APPLE__) || defined(MACOSX_USE_GLX)) && !defined(__ANDROID__) && !defined(__QNX__) && !defined(__EMSCRIPTEN__)
  if (myDisplay != NULL
   && myIsOwnDisplay)
  {
    XCloseDisplay (myDisplay);
  }
#endif
}

#if !defined(_WIN32) && (!defined(__APPLE__) || defined(MACOSX_USE_GLX)) && !defined(__ANDROID__) && !defined(__QNX__) && !defined(__EMSCRIPTEN__)
// =======================================================================
// function : Aspect_DisplayConnection
// purpose  :
// =======================================================================
Aspect_DisplayConnection::Aspect_DisplayConnection (const TCollection_AsciiString& theDisplayName)
: myDisplay (NULL),
  myIsOwnDisplay (false)
{
  myDisplayName = theDisplayName;
  Init (NULL);
}

// =======================================================================
// function : Aspect_DisplayConnection
// purpose  :
// =======================================================================
Aspect_DisplayConnection::Aspect_DisplayConnection (Display* theDisplay)
: myDisplay (NULL),
  myIsOwnDisplay (false)
{
  Init (theDisplay);
}

// =======================================================================
// function : Init
// purpose  :
// =======================================================================
void Aspect_DisplayConnection::Init (Display* theDisplay)
{
  if (myDisplay != NULL
   && myIsOwnDisplay)
  {
    XCloseDisplay (myDisplay);
  }
  myIsOwnDisplay = false;
  myAtoms.Clear();

  myDisplay = theDisplay != NULL ? theDisplay : XOpenDisplay (myDisplayName.ToCString());
  if (myDisplay == NULL)
  {
    TCollection_AsciiString aMessage;
    aMessage += "Can not connect to the server \"";
    aMessage += myDisplayName + "\"";
    throw Aspect_DisplayConnectionDefinitionError(aMessage.ToCString());
  }
  else
  {
    myIsOwnDisplay = theDisplay == NULL;
    myAtoms.Bind (Aspect_XA_DELETE_WINDOW, XInternAtom(myDisplay, "WM_DELETE_WINDOW", False));
  }
}

// =======================================================================
// function : GetAtom
// purpose  :
// =======================================================================
Atom Aspect_DisplayConnection::GetAtom (const Aspect_XAtom theAtom) const
{
  Atom anAtom = myAtoms.Find(theAtom);
  return anAtom;
}

#endif
