#include <Land.h>

class Sandbox : public Land::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Land::Application* Land::CreateApplication()
{
	return new Sandbox;
}