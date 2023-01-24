#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Land {

	class LAND_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define LA_CORE_ERROR(...)		::Land::Log::GetCoreLogger()->error(__VA_ARGS__)
#define LA_CORE_WARN(...)		::Land::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define LA_CORE_INFO(...)		::Land::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LA_CORE_TRACE(...)		::Land::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define LA_CORE_FATAL(...)		::Land::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define LA_ERROR(...)			::Land::Log::GetClientLogger()->error(__VA_ARGS__)
#define LA_WARN(...)			::Land::Log::GetClientLogger()->warn(__VA_ARGS__)
#define LA_INFO(...)			::Land::Log::GetClientLogger()->info(__VA_ARGS__)
#define LA_TRACE(...)			::Land::Log::GetClientLogger()->trace(__VA_ARGS__)
#define LA_FATAL(...)			::Land::Log::GetClientLogger()->fatal(__VA_ARGS__)

#ifdef LA_RELEASE
	#define LA_CORE_ERROR
	#define LA_CORE_WARN
	#define LA_CORE_INFO
	#define LA_CORE_TRACE
	#define LA_CORE_FATAL

	#define LA_ERROR	
	#define LA_WARN		
	#define LA_INFO
	#define LA_TRACE	
	#define LA_FATAL	
#endif