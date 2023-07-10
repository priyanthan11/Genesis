#pragma once

#ifdef GN_PLATFORM_WINDOWS

extern Genesis::Application* Genesis::CreateApplication();

int main(int argc, char** argv)
{
	
	auto app = Genesis::CreateApplication();
	app->Run();
	delete app;
}

#endif // GN_PLATFORM_WINDOWS

