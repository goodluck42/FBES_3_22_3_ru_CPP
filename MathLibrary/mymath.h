#pragma once

#ifdef MATHLIBRARY_EXPORTS
#define LIBRARY __declspec(dllexport)
#else
#define LIBRARY __declspec(dllimport)
#endif


LIBRARY int add(int a, int b);
LIBRARY int subtract(int a, int b);
LIBRARY int mult(int a, int b);
LIBRARY int divide(int a, int b);