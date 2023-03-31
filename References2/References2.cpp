#include <iostream>
// len = 4
//  0   1   2   3   4
// {10, 20, 30, 40}
// {10, 20, 30, 40, 90}

template<typename T>
void append(T*& arr, size_t& len, T value)
{
	T* new_arr = new T[len + 1];

	for (size_t i = 0; i < len; ++i)
	{
		new_arr[i] = arr[i];
	}

	new_arr[len] = value;

	++len;

	delete[] arr;

	arr = new_arr;
}

void print(int* arr, size_t len)
{
	for (size_t i = 0; i < len; ++i)
	{
		std::cout << arr[i] << ' ';
	}

	std::cout << '\n';
}

int main()
{
	size_t len = 4;
	int* arr = new int[5];
	
	//std::cout << arr;
	//
	//// int*& ptr_ref = arr;

	//arr[0] = 10;
	//arr[1] = 20;
	//arr[2] = 30;
	//arr[3] = 42;

	//print(arr, len);
	//append(arr, len, 90);
	//print(arr, len);
	delete[] arr;



	//print(arr, len);



}