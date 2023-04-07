#include <iostream>
#include <random>

std::default_random_engine engine;

void print(int* arr, size_t len)
{
	std::cout << "{ ";
	for (size_t i = 0; i < len; ++i)
	{
		std::cout << arr[i];
		if (i != len - 1)
		{
			std::cout << ',';
		}
	}

	std::cout << " }" << '\n';
}

void print(int** matrix, size_t rows, size_t* sizes)
{
	for (size_t i = 0; i < rows; ++i)
	{
		print(matrix[i], sizes[i]);
	}
}

void print(int** matrix, size_t rows, size_t cols)
{
	for (size_t i = 0; i < rows; ++i)
	{
		print(matrix[i], cols);
	}
}

void random(int* arr, size_t len)
{
	std::uniform_int_distribution<int> range(10, 99);

	for (size_t i = 0; i < len; ++i)
	{
		arr[i] = range(engine);
	}
}

int main()
{
	/* {
		size_t rows = 3;
		size_t cols = 2;

		int** matrix = new int* [rows] {}; // Array of pointers (24 bytes)

		// matrix[0] = new int[cols] {};
		// matrix[1] = new int[cols] {};
		// matrix[2] = new int[cols] {};

		for (size_t i = 0; i < rows; ++i)
		{
			matrix[i] = new int[cols] {};
		}

		// row1
		matrix[0][0] = 42;
		matrix[0][1] = 13;

		// row2
		matrix[1][0] = 90;
		matrix[1][1] = 80;

		// row3
		matrix[2][0] = 77;
		matrix[2][1] = 88;

		print(matrix, rows, cols);

		for (size_t i = 0; i < rows; ++i)
		{
			delete[] matrix[i];
		}

		delete[] matrix;
	}*/


	/* {
		size_t rows;

		std::cout << "Enter number of rows -> ";

		std::cin >> rows;

		int** matrix = new int* [rows] {}; // 24b

		size_t* sizes = new size_t[rows];

		for (size_t i = 0; i < rows; ++i)
		{
			size_t cols;
			std::cout << "Enter number for row" << i + 1 << " -> ";
			std::cin >> cols;

			sizes[i] = cols;

			matrix[i] = new int[cols];

			random(matrix[i], cols);
		}

		print(matrix, rows, sizes);
	}*/

	/* {
		size_t X = 3;
		size_t Y = 3;
		size_t Z = 3;

		int*** d3_array = new int**[X];

		for (size_t i = 0; i < X; ++i)
		{
			d3_array[i] = new int* [Y] {};
		}

		for (size_t i = 0; i < X; ++i)
		{
			for (size_t j = 0; j < Y; ++j)
			{
				d3_array[i][j] = new int[X] {};
			}
		}


		for (size_t i = 0; i < X; ++i)
		{
			for (size_t j = 0; j < Y; ++j)
			{
				for (size_t k = 0; k < Z; ++k)
				{
					d3_array[i][j][k] = rand();
				}
			}
		}
		
		for (size_t i = 0; i < X; ++i)
		{
			print(d3_array[i], Y, Z);
		}
	}*/
}