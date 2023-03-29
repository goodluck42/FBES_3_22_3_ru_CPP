#include <iostream>

void takeItem()
{
	std::cout << "takeItem" << '\n';
}

void speakToCharater()
{
	std::cout << "speakToCharater" << '\n';
}


void interact(void (*action)())
{
	std::cout << "Action happened" << '\n';
	action();
}


int sum(double* arr, int len)
{
	return 42;
}

typedef unsigned long long uint64;
typedef long long int64;
typedef short int16;
typedef int my_super_integer_type;
typedef int (*function)(double*, int);


void increment(int* value)
{
	++(*value);
}

void increment(int& value)
{
	++value;
}

void foo(int& value)
{
	std::cout << "value addr = " << &value << '\n';

	value = 99999;
}

int main()
{
	int i = 0;

	while (i < 5)
	{
		std::cout << i << '\n';
		
		increment(i);
	}

	{
		int a = 42;
		int* ptr;

		ptr = &a;

		*ptr = 13;

		std::cout << "a (ptr) = " << a << '\n';
	}

	{
		int a = 42;
		int& ref = a;

		ref = 99;

		std::cout << "a (ref) = " << a << '\n';
	}

	{
		int a = 10;

		std::cout << "a addr = " << &a << '\n';

		foo(a);

		std::cout << "a = " << a << '\n';
	}



	//int* ptr = new int[4];



	/*using std::cout;
	using std::cin;

	int x;

	cout << "123";
	cin >> x;*/
	/*{
		int16 x = 12;
		int64 v = 42LL;
		uint64 value = 42ULL;
		unsigned long long value = 42ULL;
		function ptr = sum;
		interact(speakToCharater);
		interact(takeItem);
	}*/
	
	
}