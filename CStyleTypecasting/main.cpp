#include <iostream>

int main()
{
	//int a = 42;
	//int b = 4;

	//// /, *, +, -, %

	//std::cout << a / b << '\n'; // int
	//std::cout << a * b << '\n'; // int
	//std::cout << a + b << '\n'; // int
	//std::cout << a - b << '\n'; // int

	////std::cout << 2.1 % 2.0; // ERROR

	//std::cout << "-----------------\n";


	//short x1 = 40;
	//long long x2 = 3;

	//std::cout << x1 / x2 << '\n'; // x1 / x2 (type = long long)

	//int c = 3.5F; // float literal

	//std::cout << 42 / 4. << '\n'; // double (double literal)
	//std::cout << 42 / 4.f << '\n'; // float


	///////////////////////////////////////
	// LITERALS

	//const char* s = "Hello C++"; // string literal
	//char x = '@';
	//short s = 40; // no literal
	//int i = 42;
	//unsigned int ui = 42U;
	//long l = 42L;
	//unsigned long ul = 42UL;
	//long long ll = 42LL;
	//unsigned long long ull = 42ULL;
	//float f = 20.1F;
	//double d = 20.3;

	// IMPLICIT - неявное
	// EXPLICIT - явное

	// imlicit conversions
	//short a = 20; // int to short
	//int b = 20.2; // double to int
	//float c = 20; // int to float
	//float d = 42.; // double to float

	//double e = 20ULL * 3.f; // float to double

	//float x1 = true; // bool to float

	//std::cout << x1;


	// explicit conversion

	unsigned long long ull = (unsigned long long)20;

	int a = 20;
	int b = 3;

	float result = a / (double)b;

	std::cout << result;

	// rvalue
	// lvalue
}

