#include "lapch.h"
#include "Application.h"

#include "Land/Events/ApplicationEvent.h"
#include "Land/Log.h"

#include <GLFW/glfw3.h>

namespace Land 
{

	Application::Application()
	{
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		while (m_Running)
		{
			glClearColor(0.2, 0.3, 0.4, 1);
			glClear(GL_COLOR_BUFFER_BIT);
			m_Window->OnUpdate();
		}
	}
}
