#include <Land.h>

class ExampleLayer : public Land::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{

	}

	void OnUpdate() override
	{
		LA_INFO("ExampleLayer::Update");
	}

	void OnEvent(Land::Event& event) override
	{
		LA_TRACE("{0}", event);
	}
};

class Sandbox : public Land::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
		PushOverlay(new Land::ImGuiLayer());
	}

	~Sandbox()
	{

	}
};

Land::Application* Land::CreateApplication()
{
	return new Sandbox;
}