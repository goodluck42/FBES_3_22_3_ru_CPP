#include <iostream>
#include <functional>

int a = 42;

void task()
{
	static int a = 13; // static int a = 0;

	std::cout << a << '\n';

	a += 10;
}

// { 1, 20, 42 }
// [1, 20, 42]
// 1, 20, 42

void print_brace(bool isOpen)
{
	if (isOpen)
	{
		std::cout << "{ ";

		return;
	}

	std::cout << " }";
}

void print_square_brackets(bool isOpen)
{
	if (isOpen)
	{
		std::cout << '[';

		return;
	}

	std::cout << ']';
}

void print_brackets(bool isOpen)
{
	if (isOpen)
	{
		std::cout << "( ";

		return;
	}

	std::cout << " )";
}

void print_dot()
{
	std::cout << ". ";
}

void print_comma()
{
	std::cout << ", ";
}


int max(int* arr, int len);
int min(int* arr, int len);
int avg(int* arr, int len);


int action(func_ptr)
{
	return func_ptr(...);
}

void print(int* arr, int len, void (*print_style)(bool) = nullptr, void (*print_separator)() = print_comma)
{
	if (print_style != nullptr)
	{
		print_style(true); // print_square_brackets(true);
	}

	for (int i = 0; i < len; ++i)
	{
		std::cout << arr[i];

		if (i != len - 1)
		{
			if (print_separator != nullptr)
			{
				print_separator();
			}
		}
	}

	if (print_style != nullptr)
	{
		print_style(false); // (*print_style)(false);
	}

	std::cout << '\n';
}

int main(int argc, char* argv[])
{
	const int len = 5;
	int* data = new int[len];

	*data = 1; // data[0] = 1;
	data[1] = 2; // data[1] = 2;
	*(data + 2) = 10; // data[2] = 10;
	*(data + 3) = 42; // data[3] = 42;
	*(data + 4) = 13; // data[4] = 13;




	/*void (*func)(bool) = print_square_brackets;

	func(true);

	func = print_brace;

	func(false);*/


	print(data, len, print_brace, print_dot);
	print(data, len, print_square_brackets, print_comma);
	print(data, len);


	void (*arr[3])(bool) { print_square_brackets, print_brackets, print_brace };

	for (int i = 0; i < 3; ++i)
	{
		arr[i](true);
		arr[i](false);
	}
	

	print(data, len);
	//print(data, len);


	delete[] data;
	/*int i = 0;

	while (i < 3)
	{
		std::cout << i << '\n';

		++i;
	}*/


	// findMaxNumber - camelCase
	// FindMaxNumber - PascalCase
	// find_max_number - snake_case
	// find-max-number - kebab-case

	// .cmd
	// STACK
	// HEAP
	// .bss
	// .data
	// .text / .code

}