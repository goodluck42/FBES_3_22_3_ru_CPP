#include <iostream>
#include <windows.h>

int main()
{
	/*int i = 0;

	while (i < 5)
	{
		++i;
	}


	std::cout << i << '\n';*/

	//for (int i = 0; i < 5; std::cout << i++ << '\n');


	/*for (int i = 5; i != -1; --i)
	{
		std::cout << i << '\n';
	}*/


	// EXAMPLE 1
	/*{
		int i = 0;

		for (; i < 5; ++i)
		{
			std::cout << i << '\n';
		}
	}*/

	// EXAMPLE 2
	/*{
		char i = 0;
		Beep(1100, 500);
		for (;; ++i)
		{
			std::cout << (int)i << '\n';
			Sleep(50);

		}
	}*/

	// EXAMPLE 3
	/*for (;;)
	{
		std::cout << "Hello C++" << '\n';
	}*/

	// goto is EVIL
	/*std::cout << "Hello C" << '\n';

	goto label_1;

	std::cout << "Hello C++" << '\n';

	label_1:
	std::cout << "Hello C#" << '\n';*/


	/*for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (i == 1 && j == 1)
			{
				goto for_label;
			}

			std::cout << "i = " << i << "; j = " << j << '\n';
		}
	}
for_label:
	std::cout << "after for" << '\n';

	goto idiot_label;

	if (false)
	{
		idiot_label:
		std::cout << "I'm an idiot" << '\n';
	}*/


	/*int i = 0;

	while (i < 5)
	{
		std::cout << i << '\n';

		++i;
	}*/


	/////////////////////////////
	// loop without for & while
	/*int i = 0;

loop_label:
	if (i < 5)
	{
		std::cout << i << '\n';

		++i;

		goto loop_label;
	}*/


	/*std::cout << std::boolalpha;

	int a{42};
	bool b{};
	std::cout << a << '\n';
	std::cout << b << '\n';

	auto x = 42UL;*/


	/*const int w = 5;
	const int h = 5;

	for (int i = 0; i < w; ++i)
	{
		for (int j = 0; j < h; ++j)
		{
			if (i == 2 && j == 2)
			{
				std::cout << "  ";

				continue;
			}

			std::cout << "* ";
		}

		std::cout << '\n';
	}*/


	for (size_t i = 5; i-- > 0;)
	{
		std::cout << i << '\n';
	}
}