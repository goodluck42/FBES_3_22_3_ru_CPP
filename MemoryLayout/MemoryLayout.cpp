#include <iostream>

float avg(int a, int b)
{
	return (a + b) / 2;
}


void task1()
{
	int a;
	int b;

	std::cin >> a;

	std::cin >> b;

	std::cout << "result = " << avg(a, b) << '\n';
}

int sum(int a, int b)
{
	return a + b;
}

void task2()
{
	int a;
	int b;

	std::cin >> a;
	std::cin >> b;

	std::cout << "result = " << sum(a, b) << '\n';

}


int value = 42;
int global; // 0
int* ptr; // nullptr
bool v; // false

int arr[3];

void foo()
{
	static int counter;

	std::cout << counter << '\n';

	++counter;
}

int main(int argc, char* argv[])
{
	task1();
	task2();

	/*for (int i = 0; i < 10; ++i)
	{
		foo();
	}*/

	/*for (int i = 0; i < 3; ++i)
	{
		std::cout << arr[i] << '\n';
	}*/

	/*std::cout << "value = " << value << '\n';
	std::cout << "global = " << global << '\n';
	std::cout << "global = " << ptr << '\n';
	std::cout << "global = " << v << '\n';*/

	// arr[0]
	// *(arr + 0)
	// arr[i]
	// *(arr + i)

	// CMD
	/*{
		std::cout << argc << '\n';

		for (int i = 1; i < argc; ++i)
		{
			std::cout << argv[i] << '\n';
		}

		std::cout << "Goodbye world" << '\n';

		system("pause");
	}*/
	

	//const int len = 3;
	//int ptr[len]; // 10, 20, 42; ptr = 20

	//// 20        | 21        | 22        | 23
	//// 0110 0000 | 0100 0110 | 0110 0000 | 0100 0110
	//*(ptr) = 10; // 20

	//// 24        | 25        | 26        | 27
	//// 0110 0000 | 0100 0110 | 0110 0000 | 0100 0110
	//*(ptr + 1) = 20; // 28

	//// 28        | 29        | 30        | 31
	//// 0110 0000 | 0100 0110 | 0110 0000 | 0100 0110
	//*(ptr + 2) = 42; // 36

	//// ptr[0] = 10;
	//// ptr[1] = 20;
	//// ptr[2] = 42;

	//delete[] ptr;

	// shorthand operators
	// += -= /= *=

	//{
	//	int x = 20; // 0x42
	//	int v = 42; // 0x90
	//	int* ptr = &x; // ptr = 0x42

	//	std::cout << *ptr << '\n';

	//	ptr = &v; // ptr = 0x90

	//	std::cout << *ptr << '\n';


	//	int a = 20; // 0x66 
	//	int b = a;  // 0x70
	//}
	//{
	//	{
	//		int x = 42; // 0x80
	//		int v = 99; // 0x84

	//		// int pointer to const
	//		const int* ptr = &x; // ptr = 0x80

	//		// *ptr = 20; // 0x80 = 20; - error

	//		ptr = &v; // 0x80 = 0x84
	//	}

	//	{
	//		int x = 42; // 0x80
	//		int v = 99; // 0x84

	//		// const pointer to int
	//		int* const ptr = &x; // ptr = 0x80

	//		*ptr = 20; // 0x80 = 20; - ok

	//		// ptr = &v; // 0x80 = 0x84; - error
	//	}
	//	{
	//		int x = 42;
	//		int v = 90;

	//		// const pointer to const int
	//		const int* const ptr = &x;

	//		// *ptr = 88; // - error
	//		// ptr = &v; // - error
	//	}
	//}
}