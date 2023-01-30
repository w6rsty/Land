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

#ifdef LA_ENABLE_ASSERTS
	#define LA_ASSERT(x,...) { if(!(x)) { LA_ERROR("Assertion Failed: {0}", __VA_ARGS__);__debugbreak();} }
	#define LA_CORE_ASSERT(x,...) { if(!(x)) { LA_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__);__debugbreak();} }	
#else
	#define LA_ASSERT(x,...)
	#define LA_CORE_ASSERT(x,...)
#endif

#define BIT(x) (1 << x)

#define LA_BIND_EVENT_FN(fn) std::bind(&fn, this, std::placeholders::_1)