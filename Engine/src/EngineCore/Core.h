#pragma once

#ifdef HG_PLATFORM_WINDOWS
	#ifdef HG_BUILD_DLL
		#define HG_API __declspec(dllexport)
	#else
		#define HG_API __declspec(dllimport)
	#endif
#endif