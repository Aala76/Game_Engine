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

#ifdef MANIFEST_DEBUG
	#define MANIFEST_LOG(x) std::cout<<x<<std::endl;
#else
	#define MANIFEST_LOG(x)
#endif