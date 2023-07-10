#pragma once

#ifdef GN_PLATFORM_WINDOWS // Only Apply to windows
	#ifdef GN_BUILD_DLL // This build only ment for Genesis
		#define GENESIS_API __declspec(dllexport)
	#else
		#define GENESIS_API __declspec(dllimport)

	#endif // GN_BUILD_DLL
		#error Genesis only support windows

#endif // GN_PLATFORM_WINDOWS
