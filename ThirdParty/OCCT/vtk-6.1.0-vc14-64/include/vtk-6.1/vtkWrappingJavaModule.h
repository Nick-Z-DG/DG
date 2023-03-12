
#ifndef VTKWRAPPINGJAVA_EXPORT_H
#define VTKWRAPPINGJAVA_EXPORT_H

#ifdef VTKWRAPPINGJAVA_STATIC_DEFINE
#  define VTKWRAPPINGJAVA_EXPORT
#  define VTKWRAPPINGJAVA_NO_EXPORT
#else
#  ifndef VTKWRAPPINGJAVA_EXPORT
#    ifdef vtkWrappingJava_EXPORTS
        /* We are building this library */
#      define VTKWRAPPINGJAVA_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define VTKWRAPPINGJAVA_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef VTKWRAPPINGJAVA_NO_EXPORT
#    define VTKWRAPPINGJAVA_NO_EXPORT 
#  endif
#endif

#ifndef VTKWRAPPINGJAVA_DEPRECATED
#  define VTKWRAPPINGJAVA_DEPRECATED __declspec(deprecated)
#  define VTKWRAPPINGJAVA_DEPRECATED_EXPORT VTKWRAPPINGJAVA_EXPORT __declspec(deprecated)
#  define VTKWRAPPINGJAVA_DEPRECATED_NO_EXPORT VTKWRAPPINGJAVA_NO_EXPORT __declspec(deprecated)
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKWRAPPINGJAVA_NO_DEPRECATED
#endif



#endif
