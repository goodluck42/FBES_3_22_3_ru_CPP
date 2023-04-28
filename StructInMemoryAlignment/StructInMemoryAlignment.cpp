#include <iostream>

struct A // 12
{
	long a; // 4 of 4 *
	long c; // 4 of 4 *
	char b; // 1 of 4 * (3)
	char d; // 2 of 4 + (2)
};

struct Obj
{
	long a;
	long b;
	long c;
};

struct B
{
	short b; // 2 of 8 *
	short c; // 4 of 8 +
	long a; // 8 of 8 +
	long long d; // 8 of 8 *
};

struct C
{
	short a; // 2 of 8 *
	long b; // 6 of 8 +
	short c; // 8 of 8 +
	long long x; // 8 of 8 *
};

// * - memory allocation
struct D
{
	long a; // 4 *
	// char c[13]; // 12
	char _1; // 1 of 4 *
	char _2; // 2 of 4
	char _3; // 3 of 4
	char _4; // 4 of 4
	char _5; // 1 of 4 *
	char _6; // 2 of 4
	char _7; // 3 of 4
	char _8; // 4 of 4
	char _9; // 1 of 4 *
	char _10; // 2 of 4
	char _11; // 3 of 4 
	char _12; // 4 of 4
	char _13; // 1 of 4 *
};


struct F
{
	long a; // 4 of 4 *
	char x[7]; // 4 of 4 * || 3 of 4 *
	short b; // 2 of 4 *
	char c; // 3 of 4 +
};

struct G
{
	double x; // 8 of 8 *
	short a;  // 2 of 8 *
	long b; // 
};


struct Inner
{
	double x1; // 8 of 8
	short x2; // 2 of 8
};

struct H
{
	long a; // 4 of 8 *
	Inner obj; // 16 of 16 *
	short b; // 2 of 8*
	char c; // 3 of 8+
};

struct Effect {};

struct Particle
{
	long x; // 4 of 8*
	long y; // 8 of 8+
	Effect* effect; // 8 of 8*
};

class Class
{
private:
	int a;

	A()
	{
		
	}

	virtual void bar() = 0;

	virtual void foo()
	{
		this->a;
	}
};

int main(void)
{
	Class a;

	


	std::cout << sizeof(Particle) * 1'000'000 / 1000 / 1000 << '\n';

	/*Obj test{ 10, 20, 30 };

	long* arr = (long*)(&test);

	std::cout << arr[0] << '\n';
	std::cout << arr[1] << '\n';
	std::cout << arr[2] << '\n';*/
}