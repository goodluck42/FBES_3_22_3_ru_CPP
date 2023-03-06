#include <iostream>

enum class NumberType
{
	POSITIVE,
	NEGATIVE,
	ZERO
};

void print_rect(const int width = 6, const int height = 5)
{
	for (int i = 0; i < width; ++i)
	{
		for (int j = 0; j < height; ++j)
		{
			std::cout << "* ";
		}

		std::cout << '\n';
	}

	std::cout << '\n';
}




NumberType get_number_type(int number)
{
	if (number > 0)
	{
		return NumberType::POSITIVE;
	}

	if (number < 0)
	{
		return NumberType::NEGATIVE;
	}

	return NumberType::ZERO;
}

void print_array(int arr[], int len)
{
	std::cout << "{ ";

	for (int i = 0; i < len; ++i)
	{
		std::cout << arr[i];

		if (i != len - 1)
		{
			std::cout << ", ";
		}
	}

	std::cout << " }" << '\n';
}

void do_some_work(int a, int b)
{
	std::cout << a + b << '\n';
}

double sum_double(double a, double b)
{
	return a + b;
}

int main()
{

	do_some_work(20.5, 10.9);

	auto result = sum_double(20.5, 10.9);

	std::cout << result;

	/*const int arr_len = 5;

	int arr[arr_len]{ 20, 42, 13, 15, 20 };

	print_array(arr, arr_len);

	const int arr2_len = 10;

	int arr2[arr2_len]{ 88, 13, 42, 10, 25, 77, 19, 90, 17, 89 };

	print_array(arr2, arr2_len);*/

	/*{
		int w;
		int h;

		std::cout << "Enter width -> ";
		std::cin >> w;
		std::cout << "Enter height -> ";
		std::cin >> h;

		print_rect(w, h);
		print_rect(5, 2);

		print_rect(10);
		print_rect();
	}*/

	/*{
		NumberType result = get_number_type(-50);

		switch (result)
		{
			case NumberType::POSITIVE:
				std::cout << "POSITIVE" << '\n';
				break;
			case NumberType::NEGATIVE:
				std::cout << "NEGATIVE" << '\n';
				break;
			case NumberType::ZERO:
				std::cout << "ZERO" << '\n';
				break;
			default:
				break;
		}

		if (result == NumberType::NEGATIVE)
		{
			std::cout << "Next calculations";
		}
	}*/

	return 0;
}

