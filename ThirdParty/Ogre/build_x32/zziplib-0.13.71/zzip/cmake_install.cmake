# Install script for directory: E:/Repos/DG/KernelCAD/ThirdParty/OgreNew/build_x32/zziplib-0.13.71/zzip

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "E:/Repos/DG/KernelCAD/ThirdParty/OgreNew/build_x32/Dependencies")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/zzip" TYPE FILE FILES
    "E:/Repos/DG/KernelCAD/ThirdParty/OgreNew/build_x32/zziplib-0.13.71/zzip/lib.h"
    "E:/Repos/DG/KernelCAD/ThirdParty/OgreNew/build_x32/zziplib-0.13.71/zzip/zzip.h"
    "E:/Repos/DG/KernelCAD/ThirdParty/OgreNew/build_x32/zziplib-0.13.71/zzip/format.h"
    "E:/Repos/DG/KernelCAD/ThirdParty/OgreNew/build_x32/zziplib-0.13.71/zzip/types.h"
    "E:/Repos/DG/KernelCAD/ThirdParty/OgreNew/build_x32/zziplib-0.13.71/zzip/conf.h"
    "E:/Repos/DG/KernelCAD/ThirdParty/OgreNew/build_x32/zziplib-0.13.71/zzip/_msvc.h"
    "E:/Repos/DG/KernelCAD/ThirdParty/OgreNew/build_x32/zziplib-0.13.71/zzip/file.h"
    "E:/Repos/DG/KernelCAD/ThirdParty/OgreNew/build_x32/zziplib-0.13.71/zzip/info.h"
    "E:/Repos/DG/KernelCAD/ThirdParty/OgreNew/build_x32/zziplib-0.13.71/zzip/plugin.h"
    "E:/Repos/DG/KernelCAD/ThirdParty/OgreNew/build_x32/zziplib-0.13.71/zzip/write.h"
    "E:/Repos/DG/KernelCAD/ThirdParty/OgreNew/build_x32/zziplib-0.13.71/zzip/fetch.h"
    "E:/Repos/DG/KernelCAD/ThirdParty/OgreNew/build_x32/zziplib-0.13.71/zzip/stdint.h"
    "E:/Repos/DG/KernelCAD/ThirdParty/OgreNew/build_x32/zziplib-0.13.71/zzip/zzip32.h"
    "E:/Repos/DG/KernelCAD/ThirdParty/OgreNew/build_x32/zziplib-0.13.71/zzip/autoconf.h"
    "E:/Repos/DG/KernelCAD/ThirdParty/OgreNew/build_x32/zziplib-0.13.71/zzip/_config.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "E:/Repos/DG/KernelCAD/ThirdParty/OgreNew/build_x32/zziplib-0.13.71/zzip/Debug/zzip.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "E:/Repos/DG/KernelCAD/ThirdParty/OgreNew/build_x32/zziplib-0.13.71/zzip/Release/zzip-0.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "E:/Repos/DG/KernelCAD/ThirdParty/OgreNew/build_x32/zziplib-0.13.71/zzip/MinSizeRel/zzip.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "E:/Repos/DG/KernelCAD/ThirdParty/OgreNew/build_x32/zziplib-0.13.71/zzip/RelWithDebInfo/zzip.lib")
  endif()
endif()

