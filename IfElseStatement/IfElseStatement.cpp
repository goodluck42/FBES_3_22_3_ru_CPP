#include <iostream>

int a = 5;

int main()
{
	std::cout << a << '\n';
	/*int a = 42;

	{
		int a = 5;

		std::cout << a << '\n';
		{
			int a = 10;

			std::cout << a << '\n';
		}
	}

	{
		int a = 90;

		std::cout << a << '\n';
	}

	std::cout << a << '\n';*/

	/////////////////////////////

	/*bool x = 1;

	x += 1;

	std::cout << std::boolalpha;

	std::cout << x;*/

	//////////////////////
	// < > >= <= == !=

	// SAMPLE 1
	/*int a;
	int b;
	std::cout << "Enter a and b -> ";
	std::cin >> a >> b;

	if (a > b)
	{
		std::cout << "a is greater than b" << '\n';
	}
	else if (a == b)
	{
		std::cout << "a is equals b" << '\n';
	}
	else
	{
		std::cout << "a is less than b" << '\n';
	}*/

	///////////////////

	// and = &&
	// or = ||
	// not = !
	int a = 30;

	// and
	if (a % 3 == 0 && a % 5 == 0)
	{
		std::cout << "fizz buzz" << '\n';
	}
	
	if (a > 10 || a < 30)
	{
		std::cout << "a > 10 or a < 30" << '\n';
	}

	if (!(a > 10)) // a <= 10
	{
		std::cout << "a < 10" << '\n';
	}

	bool flag = true;

	//...

	flag = !flag;
}

