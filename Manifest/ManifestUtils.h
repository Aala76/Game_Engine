#pragma once

#ifdef MANIFEST_WINDOWS
	#ifdef MANIFEST_LIB
		#define MANIFEST_API __declspec(dllexport)
	#else
		#define MANIFEST_API __declspec(dllimport)
	#endif 
#else
	#define MANIFEST_API
#endif