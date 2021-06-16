#pragma once
#if defined _WIN32 || defined __CYGWIN__
  #ifdef BUILDING_GK_FASTINV_SQRT
    #define GK_FASTINV_SQRT_PUBLIC __declspec(dllexport)
  #else
    #define GK_FASTINV_SQRT_PUBLIC __declspec(dllimport)
  #endif
#else
  #ifdef BUILDING_GK_FASTINV_SQRT
      #define GK_FASTINV_SQRT_PUBLIC __attribute__ ((visibility ("default")))
  #else
      #define GK_FASTINV_SQRT_PUBLIC
  #endif
#endif

#include <stdint.h>

float GK_FASTINV_SQRT_PUBLIC gk_qisqrt( float x );
