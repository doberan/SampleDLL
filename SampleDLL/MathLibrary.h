#pragma once

#ifdef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MATH_LIBRARY_API __declspec(dllexport)
#endif

extern "C" MATH_LIBRARY_API void fibonacci_init(
	const unsigned long long a, const unsigned long long b);

extern "C" MATH_LIBRARY_API bool fibonacci_next();

extern "C" MATH_LIBRARY_API unsigned long long fibonacci_current();

extern "C" MATH_LIBRARY_API unsigned fibonacci_index();
