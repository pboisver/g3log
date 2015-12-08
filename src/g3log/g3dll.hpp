//
//  g3dll.hpp
//
#pragma once

#if defined(WIN32)
  #ifdef G3LOG_DLL
    #define G3LOG_DYNAMICLIB __declspec(dllexport)
  #else
    #define G3LOG_DYNAMICLIB __declspec(dllimport)
  #endif
#else
  #define G3LOG_DYNAMICLIB
#endif
