#ifndef __StdHeaders_H__
#define __StdHeaders_H__

#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cstdarg>
#include <cmath>

// STL containers
#include <vector>
#include <map>
#include <string>
#include <set>
#include <list>
#include <deque>
#include <queue>
#include <bitset>
#include <unordered_map>
#include <unordered_set>

// STL algorithms & functions
#include <algorithm>
#include <functional>
#include <limits>

// C++ Stream stuff
#include <fstream>
#include <iosfwd>
#include <sstream>

#include <atomic>

extern "C" {
#   include <sys/types.h>
#   include <sys/stat.h>
}

#if OGRE_PLATFORM == OGRE_PLATFORM_WIN32 || OGRE_PLATFORM == OGRE_PLATFORM_WINRT
#  undef min
#  undef max
#  if defined( __MINGW32__ )
#    include <unistd.h>
#  endif
#endif

#if OGRE_PLATFORM == OGRE_PLATFORM_LINUX || OGRE_PLATFORM == OGRE_PLATFORM_ANDROID || OGRE_PLATFORM == OGRE_PLATFORM_EMSCRIPTEN
extern "C" {
#   include <unistd.h>
#   include <dlfcn.h>
}
#endif

#if OGRE_PLATFORM == OGRE_PLATFORM_APPLE || OGRE_PLATFORM == OGRE_PLATFORM_APPLE_IOS
extern "C" {
#   include <unistd.h>
#   include <sys/param.h>
#   include <CoreFoundation/CoreFoundation.h>
}
#endif

#if OGRE_PLATFORM == OGRE_PLATFORM_EMSCRIPTEN
#   include <emscripten/emscripten.h>
#endif

#ifdef _DEBUG
#define OGTRACE0(formatString) OutputDebugString(formatString);
#define OGTRACE1(formatString, p0) {	char dbgTRaceBuff[200];		memset(dbgTRaceBuff, 0, 200);	sprintf_s(dbgTRaceBuff, 200, formatString, p0);	OutputDebugString(dbgTRaceBuff); }
#define OGTRACE2(formatString, p0, p1) {	char dbgTRaceBuff[200];		memset(dbgTRaceBuff, 0, 200);	sprintf_s(dbgTRaceBuff, 200, formatString, p0, p1);	OutputDebugString(dbgTRaceBuff); }
#define OGTRACE3(formatString, p0, p1, p2) {	char dbgTRaceBuff[200];		memset(dbgTRaceBuff, 0, 200);	sprintf_s(dbgTRaceBuff, 200, formatString, p0, p1, p2);	OutputDebugString(dbgTRaceBuff); }
#define OGTRACE4(formatString, p0, p1, p2, p3) {	char dbgTRaceBuff[200];		memset(dbgTRaceBuff, 0, 200);	sprintf_s(dbgTRaceBuff, 200, formatString, p0, p1, p2, p3);	OutputDebugString(dbgTRaceBuff); }
#else
#define OGTRACE0(formatString)
#define OGTRACE1(formatString, p0)
#define OGTRACE2(formatString, p0, p1)
#define OGTRACE3(formatString, p0, p1, p2)
#define OGTRACE4(formatString, p0, p1, p2, p3)
#endif

#endif
