#include <iostream>


template<typename T>
void print(T arr[], int len)
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

template<typename TType> void print(TType value)
{
	std::cout << value;
}

template<typename T> T sum(T a, T b);
template<typename TOne, typename TTwo> auto sum(TOne a, TTwo b);

int main()
{
    double a = 42.1;
    double b = 13.2;

    std::cout << sum<double>(a, b) << '\n';

    long x1 = 42L;
    long x2 = 13L;

    std::cout << sum<long>(x1, x2) << '\n';


	int arr[3]{ 10, 20, 30 };
	double arr2[3]{ 42.5, 13.1, 17.2 };

	print<int>(arr, 3);
	print<double>(arr2, 3);
}

template<typename T>
T sum(T a, T b)
{
    T result = a + b;

    return result;
}

template<typename TOne, typename TTwo>
auto sum(TOne a, TTwo b)
{
    auto result = a + b;

    return result;
}