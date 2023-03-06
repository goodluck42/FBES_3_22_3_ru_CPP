#include <iostream>
#include <random>

void print_array(int arr[], int len);
void print_array(double arr[], int len);
void print_array(int arr[][3], int rows, const int cols = 3);

int sum(int a, int b)
{
	std::cout << "int sum(int a, int b)\t";

	return a + b;
}

double sum(double a, int b) // по порядку типов данных
{
	std::cout << "double sum(double a, int b)\t";

	return a + b;
}

double sum(int a, double b)  // по порядку типов данных
{
	std::cout << "double sum(int a, double b)\t";

	return a + b;
}

int sum(int a, int b, int c) // по кол-ву параматеров
{
	std::cout << "int sum(int a, int b, int c)\t";

	return a + b + c;
}

//int sum(int a, int b, int c = 0) // параметр по умолчанию даст ошибку (неопределённость)
//{
//	std::cout << "int sum(int a, int b, int c = 0)\t";
//
//	return a + b + c;
//}

double sum(double a, double b) // по типу данных
{
	std::cout << "double sum(double a, double b)\t";

	return a + b;
}



//double sum(int a, int b) // нельзя перегрузить по возвращаемому типу данных
//{
//	std::cout << "double sum(int a, int b)\t";
//
//	return a + b;
//}

int foo(int a, int b);

//float foo(int a, int b);


void baz()
{
	baz();
}


// std::uniform_int_distribution<long>
// std::uniform_real_distribution<double>;

void generate_random_values(long arr[][3], int rows, const int cols = 3);
void generate_random_values(double arr[][3], int rows, const int cols = 3);
void generate_random_values(short arr[][3], int rows, const int cols = 3);

int main()
{
	//foo(10, 20);


	/*{
		std::cout << sum(10, 20) << '\n';
		std::cout << sum(42, 13, 15) << '\n';
		std::cout << sum(10.1, 42.3) << '\n';
		std::cout << sum(5, 5.7) << '\n';
		std::cout << sum(5.7, 5) << '\n';
	}*/

	/*{
		const int len = 4;
		int arr[len]{ 10, 52, 42, 12 };

		print_array(arr, len);

		double arr2[len]{ 20.42, 90.15, 77.11, 13.57 };

		print_array(arr2, len);
	}*/

	const int rows = 3;
	const int cols = 3;

	long arr[rows][cols]{};
	
	double arr2[rows][cols]{};

	short arr3[rows][cols]{};


	// Функции не написаны
	/*generate_random_values(arr, rows);
	generate_random_values(arr2, rows);
	generate_random_values(arr3, rows);*/


	int arr4[rows][cols]{
		{20, 11, 30},
		{42, 15, 22},
		{12, 15, 13},
	};

	print_array(arr4, rows, cols);
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

void print_array(double arr[], int len)
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


void print_array(int arr[][3], int rows, const int cols)
{
	std::cout << "{\n";
	for (int i = 0; i < rows; ++i)
	{
		std::cout << "    ";
		print_array(arr[i], cols);
	}
	std::cout << "}" << '\n';
}