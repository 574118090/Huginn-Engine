#pragma once

#ifdef HG_PLATFORM_WINDOWS

extern Huginn::Application* Huginn::CreateApplication();

int main(int argc, char** argv)
{
	std::cout << "Hello, World.\n";

	auto window = Huginn::CreateApplication();
	window->Run();
	delete window;	
}

#endif