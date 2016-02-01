#pragma once

#if defined(_WIN32)

#if defined(G3LOG_DLL)
#define G3LOG_DYNAMICLIB __declspec(dllexport)
#else
#define G3LOG_DYNAMICLIB __declspec(dllimport)
#endif

#else

#if defined(G3LOG_DLL)
#define G3LOG_DYNAMICLIB __attribute__((visibility("default")))
#else
#define G3LOG_DYNAMICLIB
#endif

#endif
