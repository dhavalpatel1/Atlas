#include <Atlas.h>

class ExampleLayer : public Atlas::Layer
{
public:
	ExampleLayer() : Layer("Example")
	{

	}

	void OnUpdate() override
	{
		ATL_INFO("ExampleLayer::Update");
	}

	void OnEvent(Atlas::Event& event) override
	{
		ATL_TRACE("{0}", event);
	}
};

class Sandbox : public Atlas::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
		PushOverlay(new Atlas::ImGuiLayer());
	}

	~Sandbox()
	{

	}
};

Atlas::Application* Atlas::CreateApplication()
{
	return new Sandbox();
}