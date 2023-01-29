#pragma once

#ifdef LA_PLATFORM_WINDOWS

extern Land::Application* Land::CreateApplication();

int main(int argc, char** argv)
{
	Land::Log::Init();
	LA_CORE_WARN("Initialized log!");


	auto app = Land::CreateApplication();
	app->Run();
	delete app;
}

#endif