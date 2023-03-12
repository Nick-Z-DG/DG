@echo off

set SHORTCUT_HEADERS=false

set VCVER=vc14
set ARCH=64
set "VCVARS=%VS100COMNTOOLS%..\..\VC\vcvarsall.bat"
set "PRODUCTS_PATH=%~dp0.."

rem Optional 3rd-parties switches
set HAVE_FREEIMAGE=true
set HAVE_TBB=true
set HAVE_VTK=true
set HAVE_D3D=true
set HAVE_FFMPEG=true
set HAVE_RAPIDJSON=true
set HAVE_DRACO=true
set CHECK_QT4=true
set CHECK_JDK=true

set QTDIR=%PRODUCTS_PATH%\qt5.11.2-%VCVER%-%ARCH%

rem Additional headers search paths
set "CSF_OPT_INC=%PRODUCTS_PATH%\draco-1.4.1-%VCVER%-%ARCH%\include;%PRODUCTS_PATH%\openvr-1.14.15-%ARCH%\headers;%PRODUCTS_PATH%\VTK-6.1.0-%VCVER%-%ARCH%\include\vtk-6.1;%PRODUCTS_PATH%\tcltk-86-%ARCH%\include;%PRODUCTS_PATH%\freetype-2.5.5-%VCVER%-%ARCH%\include;%PRODUCTS_PATH%\freetype-2.5.5-%VCVER%-%ARCH%\include\freetype2;%PRODUCTS_PATH%\freeimage-3.17.0-%VCVER%-%ARCH%\include;%PRODUCTS_PATH%\tbb_2021.5-%VCVER%-%ARCH%\include;%PRODUCTS_PATH%\qt5.11.2-%VCVER%-%ARCH%\include;%PRODUCTS_PATH%\qt5.11.2-%VCVER%-%ARCH%\include\Qt;%PRODUCTS_PATH%\qt5.11.2-%VCVER%-%ARCH%\include\QtGui;%PRODUCTS_PATH%\qt5.11.2-%VCVER%-%ARCH%\include\QtCore;%PRODUCTS_PATH%\jdk1.6.0-%ARCH%\include;%PRODUCTS_PATH%\jdk1.6.0-%ARCH%\include\win32;%PRODUCTS_PATH%\ffmpeg-3.3.4-%ARCH%\include;%PRODUCTS_PATH%\rapidjson-1.1.0\include"

rem Additional libraries (32-bit) search paths 
set "CSF_OPT_LIB32=%PRODUCTS_PATH%\draco-1.4.1-%VCVER%-%ARCH%\lib;%PRODUCTS_PATH%\openvr-1.14.15-%ARCH%\lib\win%ARCH%;%PRODUCTS_PATH%\VTK-6.1.0-%VCVER%-%ARCH%\lib;%PRODUCTS_PATH%\tcltk-86-%ARCH%\lib;%PRODUCTS_PATH%\freetype-2.5.5-%VCVER%-%ARCH%\lib;%PRODUCTS_PATH%\freeimage-3.17.0-%VCVER%-%ARCH%\lib;%PRODUCTS_PATH%\tbb_2021.5-%VCVER%-%ARCH%\lib;%PRODUCTS_PATH%\qt5.11.2-%VCVER%-%ARCH%\lib;%PRODUCTS_PATH%\ffmpeg-3.3.4-%ARCH%\lib"
set "CSF_OPT_LIB32D=%PRODUCTS_PATH%\draco-1.4.1-%VCVER%-%ARCH%\libd;%PRODUCTS_PATH%\openvr-1.14.15-%ARCH%\lib\win%ARCH%;%PRODUCTS_PATH%\VTK-6.1.0-%VCVER%-%ARCH%\lib;%PRODUCTS_PATH%\tcltk-86-%ARCH%\lib;%PRODUCTS_PATH%\freetype-2.5.5-%VCVER%-%ARCH%\lib;%PRODUCTS_PATH%\freeimage-3.17.0-%VCVER%-%ARCH%\lib;%PRODUCTS_PATH%\tbb_2021.5-%VCVER%-%ARCH%\lib;%PRODUCTS_PATH%\qt5.11.2-%VCVER%-%ARCH%\lib;%PRODUCTS_PATH%\ffmpeg-3.3.4-%ARCH%\lib"

rem Additional libraries (64-bit) search paths 
set "CSF_OPT_LIB64=%PRODUCTS_PATH%\draco-1.4.1-%VCVER%-%ARCH%\lib;%PRODUCTS_PATH%\openvr-1.14.15-%ARCH%\lib\win%ARCH%;%PRODUCTS_PATH%\VTK-6.1.0-%VCVER%-%ARCH%\lib;%PRODUCTS_PATH%\tcltk-86-%ARCH%\lib;%PRODUCTS_PATH%\freetype-2.5.5-%VCVER%-%ARCH%\lib;%PRODUCTS_PATH%\freeimage-3.17.0-%VCVER%-%ARCH%\lib;%PRODUCTS_PATH%\tbb_2021.5-%VCVER%-%ARCH%\lib;%PRODUCTS_PATH%\qt5.11.2-%VCVER%-%ARCH%\lib;%PRODUCTS_PATH%\ffmpeg-3.3.4-%ARCH%\lib"
set "CSF_OPT_LIB64D=%PRODUCTS_PATH%\draco-1.4.1-%VCVER%-%ARCH%\libd;%PRODUCTS_PATH%\openvr-1.14.15-%ARCH%\lib\win%ARCH%;%PRODUCTS_PATH%\VTK-6.1.0-%VCVER%-%ARCH%\lib;%PRODUCTS_PATH%\tcltk-86-%ARCH%\lib;%PRODUCTS_PATH%\freetype-2.5.5-%VCVER%-%ARCH%\lib;%PRODUCTS_PATH%\freeimage-3.17.0-%VCVER%-%ARCH%\lib;%PRODUCTS_PATH%\tbb_2021.5-%VCVER%-%ARCH%\lib;%PRODUCTS_PATH%\qt5.11.2-%VCVER%-%ARCH%\lib;%PRODUCTS_PATH%\ffmpeg-3.3.4-%ARCH%\lib"

rem Additional (32-bit) search paths
set "CSF_OPT_BIN32=%PRODUCTS_PATH%\draco-1.4.1-%VCVER%-%ARCH%\bin;%PRODUCTS_PATH%\openvr-1.14.15-%ARCH%\bin\win%ARCH%;%PRODUCTS_PATH%\VTK-6.1.0-%VCVER%-%ARCH%\bin;%PRODUCTS_PATH%\tcltk-86-%ARCH%\bin;%PRODUCTS_PATH%\freetype-2.5.5-%VCVER%-%ARCH%\bin;%PRODUCTS_PATH%\freeimage-3.17.0-%VCVER%-%ARCH%\bin;%PRODUCTS_PATH%\tbb_2021.5-%VCVER%-%ARCH%\bin;%PRODUCTS_PATH%\qt5.11.2-%VCVER%-%ARCH%\bin;%PRODUCTS_PATH%\jdk1.6.0-%ARCH%\bin;%PRODUCTS_PATH%\ffmpeg-3.3.4-%ARCH%\bin"
set "CSF_OPT_BIN32D=%PRODUCTS_PATH%\draco-1.4.1-%VCVER%-%ARCH%\bin;%PRODUCTS_PATH%\openvr-1.14.15-%ARCH%\bin\win%ARCH%;%PRODUCTS_PATH%\VTK-6.1.0-%VCVER%-%ARCH%\bin;%PRODUCTS_PATH%\tcltk-86-%ARCH%\bin;%PRODUCTS_PATH%\freetype-2.5.5-%VCVER%-%ARCH%\bin;%PRODUCTS_PATH%\freeimage-3.17.0-%VCVER%-%ARCH%\bin;%PRODUCTS_PATH%\tbb_2021.5-%VCVER%-%ARCH%\bin;%PRODUCTS_PATH%\qt5.11.2-%VCVER%-%ARCH%\bin;%PRODUCTS_PATH%\jdk1.6.0-%ARCH%\bin;%PRODUCTS_PATH%\ffmpeg-3.3.4-%ARCH%\bin"

rem Additional (64-bit) search paths
set "CSF_OPT_BIN64=%PRODUCTS_PATH%\draco-1.4.1-%VCVER%-%ARCH%\bin;%PRODUCTS_PATH%\openvr-1.14.15-%ARCH%\bin\win%ARCH%;%PRODUCTS_PATH%\VTK-6.1.0-%VCVER%-%ARCH%\bin;%PRODUCTS_PATH%\tcltk-86-%ARCH%\bin;%PRODUCTS_PATH%\freetype-2.5.5-%VCVER%-%ARCH%\bin;%PRODUCTS_PATH%\freeimage-3.17.0-%VCVER%-%ARCH%\bin;%PRODUCTS_PATH%\tbb_2021.5-%VCVER%-%ARCH%\bin;%PRODUCTS_PATH%\qt5.11.2-%VCVER%-%ARCH%\bin;%PRODUCTS_PATH%\jdk1.6.0-%ARCH%\bin;%PRODUCTS_PATH%\ffmpeg-3.3.4-%ARCH%\bin"
set "CSF_OPT_BIN64D=%PRODUCTS_PATH%\draco-1.4.1-%VCVER%-%ARCH%\bin;%PRODUCTS_PATH%\openvr-1.14.15-%ARCH%\bin\win%ARCH%;%PRODUCTS_PATH%\VTK-6.1.0-%VCVER%-%ARCH%\bin;%PRODUCTS_PATH%\tcltk-86-%ARCH%\bin;%PRODUCTS_PATH%\freetype-2.5.5-%VCVER%-%ARCH%\bin;%PRODUCTS_PATH%\freeimage-3.17.0-%VCVER%-%ARCH%\bin;%PRODUCTS_PATH%\tbb_2021.5-%VCVER%-%ARCH%\bin;%PRODUCTS_PATH%\qt5.11.2-%VCVER%-%ARCH%\bin;%PRODUCTS_PATH%\jdk1.6.0-%ARCH%\bin;%PRODUCTS_PATH%\ffmpeg-3.3.4-%ARCH%\bin"


