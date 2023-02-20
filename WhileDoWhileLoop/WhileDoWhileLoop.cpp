#include <iostream>
#include <windows.h>

int main()
{
	//int a = 6;

	//if (a % 2 == 0)
	//	std::cout << "even" << '\n';
	//else
	//	std::cout << "odd" << '\n';


	// INCREMENTS & DECREMENTS


	// a++; postfix increment
	/*int a = 0;
	int b = a++;

	std::cout << a << '\n';
	std::cout << b << '\n';*/

	// ++a; prefix increment

	/*int a = 0;
	int b = ++a;

	std::cout << a << '\n';
	std::cout << b << '\n';*/

	// a--; postfix decrement
	/*int a = 5;
	int b = a--;

	std::cout << a << '\n';
	std::cout << b << '\n';*/

	// --a; prefix decrement

	/*int a = 0;
	int b = --a;

	std::cout << a << '\n';
	std::cout << b << '\n';*/

	int a = 2; // a = 3
	int c = ++a + a++;
	//        4 + 2
	//          6

	std::cout << c << '\n';
	std::cout << a << '\n';

	//int i = 0;

	//while (i < 5)
	//{
	//	if (i == 3)
	//	{
	//		i++;
	//		continue;
	//	}


	//	/*if (i == 1)
	//	{
	//		break;
	//	}*/

	//	std::cout << "C++ is the best" << '\n';

	//	// i += 1; // вариант курильщика/питониста
	//	// i++; // postfix инкремент
	//	// ++i; // prefix инкремент

	//	++i;
	//}

	/*int i = 0;

	do
	{
		std::cout << "Hello C++" << '\n';

		i++;
	} while (false);*/


	// Ternary operator
	//{
	//	std::cout << std::boolalpha;

	//	int value = -5;
	//	//                         true        false
	//	std::cout << (value > 0 ? "positive" : "negative");

	//	// if-else statement
	//	/*if (value > 0)
	//	{
	//		std::cout << "positive";
	//	}
	//	else
	//	{
	//		std::cout << "negative";
	//	}*/
	//}

	//{
	//	int value = 0;

	//	std::cout << (value > 0 ? "positive" : (value < 0 ? "negative" : "zero"));

	//	/*if (value > 0)
	//	{
	//		std::cout << "positive";
	//	}
	//	else if (value < 0)
	//	{
	//		std::cout << "negative";
	//	}
	//	else
	//	{
	//		std::cout << "zero";
	//	}*/
	//}


	bool flag = true;

	while (flag)
	{
		system("cls");
		std::cout << "1. Task" << '\n';
		std::cout << "2. Task" << '\n';
		std::cout << "3. exit" << '\n';

		int op;
		
		std::cout << "Enter operation -> ";
		std::cin >> op;

		switch (op)
		{
			case 1:
			{
				std::cout << "Task 1 content" << '\n';

				break;
			}

			case 2:
			{
				std::cout << "Task 2 content" << '\n';

				break;
			}

			case 3:
			{
				flag = false;

				break;
			}
		}

		Sleep(3000);
	}
}