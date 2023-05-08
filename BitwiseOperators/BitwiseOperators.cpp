#include <iostream>

bool A()
{

	std::cout << "A" << '\n';

	return true;
}

bool B()
{
	std::cout << "B" << '\n';

	return false;
}

char* XOR_encrypt(const char* data, int key);
char* XOR_decrypt(const char* data, int key);

int main()
{
	// A = true
	// B = false
	/*if (B() & A())
	{
		std::cout << "OK" << '\n';
	}
	else
	{
		std::cout << "FAIL" << '\n';
	}*/



	int a = 8213; // 00000000 00000000 00100000 00010101
	int b = 7291; // 00000000 00000000 00011100 01111011

	// & - умножение
	// | - сложение
	// 
	// & - bitwise AND
	{
		// 00000000 00000000 00100000 00010101 = 8213
		// &
		// 00000000 00000000 00011100 01111011 = 7291
		// 00000000 00000000 00000000 00010001 = 17
		int result = a & b;

		std::cout << "a & b = " << result << '\n';
	}

	// | - bitwise OR

	{
		// 00000000 00000000 00100000 00010101 = 8213
		// |
		// 00000000 00000000 00011100 01111011 = 7291
		// 00000000 00000000 00111100 01111111 = 15487

		int result = a | b;

		std::cout << "a | b = " << result << '\n';
	}


	{
		long long value = 0b0011110001111111;

		std::cout << value << '\n';
	}

	// ~ - bitwise IVERSION

	{
		// 00000000 00000000 00100000 00010101
		// ~
		// 11111111 11111111 11011111 11101010

		int value = ~a;

		std::cout << "~a = " << value << '\n';

		int test = 0b10000000000000000000000000000000;

		std::cout << test << '\n';
	}

	// ^ - XOR
	{
		int result = a ^ b;

		// 00000000 00000000 00100000 00010101
		// ^
		// 00000000 00000000 00011100 01111011
		// 00000000 00000000 00111100 01101110

		std::cout << result << '\n';
	}

	// Шифровка при помощи XOR
	{
		char c = 'G'; // 01000111

		int key = 42; // 00101010

		char encrypted = c ^ key; // 01101101

		// 01000111 = 'G'
		// ^
		// 00101010 = 42
		// =
		// 01101101 = ...

		std::cout << "encrypted = " << encrypted << '\n';

		char decrypted = encrypted ^ key;

		// 01101101
		// ^
		// 00101010
		// = 
		// 01000111

		std::cout << "decryped = " << decrypted << '\n';
	}

	// Шифровка при помощи XOR

	{
		char* text = new char[32] {};
		int key = 99;

		strcpy_s(text, 32, "Hello C++");

		char* encrypted = XOR_encrypt(text, key);

		std::cout << "encryped text = " << encrypted << '\n';

		char* decrypted = XOR_decrypt(encrypted, key);

		std::cout << "decrypted text = " << decrypted << '\n';

		delete[] text;
		delete[] encrypted;
		delete[] decrypted;
	}

	// << - left shift
	{
		// 00000000 00000000 00100000 00010101
		// << 2
		// 00000000 00000000 10000000 01010100

		int result = a << 2;

		std::cout << "a << 2 = " << result << '\n';

		std::cout << (2 << (3 - 1)) << '\n';
	}

	// >> right shift

	{
		// 00000000 00000000 00100000 00010101
		// >> 2
		// 00000000 00000000 00001000 00000101

		int result = a >> 2;

		std::cout << "a >> 2 = " << result << '\n';
	}


	// 00000000 00000000 00000000 00000000
	int value = 0;

	{
		short a = 1234; // 00000100 11010010
		short b = 4213; // 00010000 01110101

		// 00000000 00000000 00000100 11010010
		value |= a;

		// 00000100 11010010 00000000 00000000
		value <<= 16;

		// 00000100 11010010 00010000 01110101
		value |= b;

		std::cout << value << '\n';
	}

	{
		//         a        |        b
		// 00000100 11010010 00010000 01110101 = value

		std::cout << (short)value << '\n';

		//                  |        b
		// 00000000 00000000 00000100 11010010 = value
		value >>= 16;

		std::cout << (short)value << '\n';
	}

	int a = 42;
	int b = 13;

	std::cout << ~(a & b);

	return 0;
}
// qwerty123 = abx123x02f
// qwerty123 = abx123x02f


char* XOR_encrypt(const char* data, int key)
{
	size_t len = strlen(data);
	char* encrypted = new char[len + 1] {};

	for (size_t i = 0; i < len; ++i)
	{
		encrypted[i] = data[i] ^ key;
	}

	return encrypted;
}

char* XOR_decrypt(const char* data, int key)
{
	return XOR_encrypt(data, key);
}