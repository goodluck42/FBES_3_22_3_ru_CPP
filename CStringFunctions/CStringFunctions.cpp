#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <cmath>

size_t my_strlen(const char* text)
{
	size_t len = 0;

	while (text[len] != '\0')
	{
		++len;
	}

	return len;
}
int stoi(char* text)
{
	return 42;
}
char* itos(int value)
{
	char* text = new char[16];

	strcpy_s(text, 16, "42");

	return text;
}
int main()
{
	//// char text[16] = "Hello";

//char* text2 = new char[16] {};

//// strcpy(text2, text); // non-secure

//strcpy_s(text2, 16, "Hello"); // secure

//std::cout << text2 << '\n';

////std::cout << strlen(text);

//delete[] text2;

/* {
	char* text1 = new char[16] {};
	char* text2 = new char[14] {};

	strcpy_s(text1, 16, "Hello");
	strcpy_s(text2, 14, "world");

	strcat_s(text1, 16, text2);


	std::cout << text1 << '\n';


	delete[] text1;
	delete[] text2;
}*/

/* {
	char* text1 = new char[16] {};
	char* text2 = new char[16] {};

	// appl
	// applexxx


	strcpy_s(text1, 16, "Hello");
	strcpy_s(text2, 16, "hello");

	// text1 == text2
	// text1 = Hello
	// text2 = Hello

	// text1 < text2
	// text1 = Hello // H = 72
	// text2 = hello // h = 104

	// text1 > text2
	// text1 = map // m = 109
	// text2 = apple // a = 97

	int result = _strcmpi(text1, text2); // 1, 0, -1

	if (result == 0)
	{
		std::cout << "equals (0)" << '\n';
	}
	else if (result == -1)
	{
		std::cout << "less (-1)" << '\n';
	}
	else
	{
		std::cout << "more (1)" << '\n';
	}
}*/

/* {

	//std::cin.getline(buffer, 64);

	char* buffer = new char[64];

	strcpy_s(buffer, 64, "hello");

	_strupr_s(buffer, 64); // UPPERCASE
	_strlwr_s(buffer, 64); // lowercase

	std::cout << buffer << '\n';

	delete[] buffer;
}*/

/* {
	char* text = new char[16] {};

	strcpy_s(text, 16, "Hello");

	char* match = strrchr(text, 'l');

	//*match = 'L';
	//match[1] = 'L'; // *(match + 1) = 'L';

	long long diff = abs(text - match); // index of first 'l'

	std::cout << text << '\n';
	std::cout << diff << '\n';
}*/
/*{
	char* text = new char[16];

	strcpy_s(text, 16, "42123123");

	long value = strtol(text, &text, 16);

	// strtoll string to long long
	// strtod string to double
	// strtof string to float
	// strtoull string to unsigned long long
	// strtold string to long double

	std::cout << value << '\n';
}*/

//{
//	char* text = new char[64] {};
//	
//	strcpy_s(text, 64, "Hello! It's a nice day.");
//	// strchr
//	char* match = strstr(text, "nice");

//	*match = 'b';
//	match[1] = 'a';
//	match[2] = 'd';
//	match[3] = ' ';

//	std::cout << text << '\n';

//}
// 
	// TASK1
	/*{
		char buffer[16];

		std::cin.getline(buffer, 16);

		int result = stoi(buffer);

		std::cout << "result = " << result << '\n';
	}*/

	// TASK2
	/*{
		int value;

		std::cin >> value;

		char* result = itos(value);

		std::cout << result;

		delete[] result;
	}*/

	char c = 'B';

	c += 32;

	std::cout << c << '\n';
}