#pragma once
#
namespace Genesis
{
	class _declspec(dllexport) Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Tobe defined in Client
	Application* CreateApplication();
}


