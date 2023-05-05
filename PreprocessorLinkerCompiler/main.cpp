// #define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>
#include <iostream>

#include "mymath.h"
#include "engine.h"

#define NUMBER 42
#define SMTH

//
//#define BEGIN {
//#define END }
//#define MAIN int main()
//#define _END ;
//#define PRINT(TEXT) std::cout << TEXT _END
//#define PAUSE system("pause") _END
//
//
//
//
//MAIN
//BEGIN
//PRINT(NUMBER)
//PAUSE
//END

// LINUX
// WIN

#define WINDOWS
void PrintMessage(const char* text)
{
#define LINUX
// &&, ||, !, ==, !=, >, <, >=, <=


#ifdef LINUX
	printf("Message from Linux: ");
	printf(text);
	printf("\n");
#elif defined(WINDOWS)
	std::cout << "Message from Windows: " << text << '\n';
#else
	std::cout << "OS is not supported" << '\n';
#endif
}

#define VALUE 42
#include <Windows.h>
int main()
{
//#if VALUE == 42
//	std::cout << "value is 42\n";
//#endif
//
//#undef VALUE
//
//	const int VALUE = 43;
//
//	std::cout << VALUE;
//
//	PrintMessage("Hello");
//
//
//#ifndef TEST // #if !defined(TEST)
//	std::cout << "TEST is not defined" << '\n';
//#endif
//
//
//	std::cout << add(50, 10);
#define SUM(a, b) a + b

	std::cout << max(15, 20) << '\n';

	int a = SUM(41, 1);

	std::cout << (a == 42 ? "a is 42" : "a is not 42");
}