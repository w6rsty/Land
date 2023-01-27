#include "Application.h"

#include "Log.h"
#include "Events/ApplicationEvent.h"

namespace Land {
	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1920, 1080);
		LA_TRACE(e);

		while (true);
	}
}
