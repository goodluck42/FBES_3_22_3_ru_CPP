#include <iostream>

void foo(int* ptr)
{
	/*std::cout << "address (foo) = " << ptr << '\n';
	std::cout << "address of ptr (foo)" << &ptr << '\n';*/

	*ptr = 90;

	//std::cout << *ptr << '\n';
}

int main()
{
	int x = 42;
	int* ptr = &x;

	/*std::cout << "value = " << x << '\n';
	std::cout << "address (main) = " << ptr << '\n';
	std::cout << "address of ptr (main) = " << &ptr << '\n';*/

	foo(ptr);
	
	std::cout << x << '\n';

	/*foo(x);

	std::cout << "address of (inside main) = " << &x << '\n';*/


	/*int len;

	std::cin >> len;*/

	// int arr[len]{};

	// foo(arr);

	
	//{
	//	int* value1 = new int; // nullptr
	//	int* value2 = new int; // nullptr

	//	*value1 = 42; // dereference
	//	*value2 = 13; // dereference

	//	std::cout << *value1 * *value2;

	//	// std::cout << (void*)nullptr;

	//	delete value1;
	//	delete value2;
	//}
	
	//{
	//	long long len;

	//	std::cout << "Enter array length -> ";
	//	std::cin >> len;

	//	double* arr = new double[len];

	//	/*if (arr == nullptr)
	//	{
	//		std::cout << "Not enough memory" << '\n';

	//		return -1;
	//	}*/

	//	for (int i = 0; i < len; ++i)
	//	{
	//		std::cout << "Enter " << i << " element -> ";
	//		std::cin >> arr[i];
	//	}

	//	std::cout << "--------------------\n";

	//	for (int i = 0; i < len; ++i)
	//	{
	//		std::cout << arr[i] << '\n';
	//	}

	//	delete[] arr;

	//}

	// арифметика указателей
	
	//{
	//	//                      4   8   12
	//	int* arr = new int[3] { 20, 42, 13 };

	//	int* addr = arr + 1; // +4 bytes = 8
	//	
	//	//std::cout << *(arr + 1);

	//	std::cout << *(addr - 1) << '\n';
	//	std::cout << *(arr + 1) << '\n';
	//	std::cout << arr[1] << '\n';
	//	std::cout << "-----------\n";

	//	for (int i = 0; i < 3; ++i)
	//	{
	//		std::cout << *(arr + i) << '\n';
	//		//std::cout << arr[i] << '\n';
	//	}

	//	delete[] arr;
	//}
}