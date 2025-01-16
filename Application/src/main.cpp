#include <Engine.h>

class MainWindow : public Huginn::Application
{
public:
	MainWindow()
	{

	}

	~MainWindow()
	{

	}
};

Huginn::Application* Huginn::CreateApplication()
{
	return new MainWindow();
}