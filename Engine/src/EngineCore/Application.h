#pragma once

#include "Core.h"

namespace Huginn
{
	class HG_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	Application* CreateApplication();
}