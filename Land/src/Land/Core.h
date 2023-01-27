#pragma once

#ifdef LA_PLATFORM_WINDOWS
	#ifdef LA_BUILD_DLL
		#define LAND_API __declspec(dllexport)
	#else 
		#define LAND_API __declspec(dllimport)
	#endif // LA_BUILD_DLL
#else
	#error Land only supports Windows!
#endif // !LA_PLATFORM_WINDOWS

#define BIT(x) (1 << x)
