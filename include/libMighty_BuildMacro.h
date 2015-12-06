#pragma once

#ifdef _WIN32
	#ifdef libMighty_EXPORTS
		#define LIBMIGHTY_API __declspec(dllexport)
	#else
		#define LIBMIGHTY_API __declspec(dllimport)
	#endif
#else
	#define LIBMIGHTY_API
#endif