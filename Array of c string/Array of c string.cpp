#include <iostream>


namespace MSSql
{
	void connect()
	{
		std::cout << "Connected to mssql" << '\n';
	}

	void disconnect()
	{
		std::cout << "Disconnected from mssql" << '\n';
	}
}

namespace MySql
{
	void connect()
	{
		std::cout << "Connected to mysql" << '\n';
	}

	void disconnect()
	{
		std::cout << "Disconnected from mysql" << '\n';
	}
}

namespace MySql
{
	void insert()
	{
		std::cout << "Inserting data to mysql" << '\n';
	}
}

// using namespace MySql; // Don't do that
// using namespace MSSql; // Don't do that 

void connect()
{
	std::cout << "Connected to smth" << '\n';
}

int a = 42;

void foo()
{
	std::cout << "Foo!" << '\n';
}

int main()
{
	int a = 13;
	int foo = 90;

	std::cout << ::a + a<< '\n';
	std::cout << foo << '\n';
	::foo();


	MySql::
	/* {
		size_t len = 4;

		char** text_arr = new char* [len];

		for (size_t i = 0; i < len; ++i)
		{
			text_arr[i] = new char[64] {};
		}

		strcpy_s(text_arr[0], 64, "Hello world!");
		strcpy_s(text_arr[1], 64, "Yellow");
		strcpy_s(text_arr[2], 64, "Tamerlan");
		strcpy_s(text_arr[3], 64, "Nibber");

		char* text1 = text_arr[0];

		std::cout << text1;

		for (size_t i = 0; i < len; ++i)
		{
			delete[] text_arr[i];
		}

		delete[] text_arr;
	}*/
	
	/* {
		int a = 42; // 4
		double b = 13.5; // 8
		long long c = 90; // 8

		void* memory = operator new(20);

		{
			int* a_ptr = (int*)memory;

			*a_ptr = a;
		}
		{
			char* anchor = (char*)memory + sizeof(int);

			double* b_ptr = (double*)anchor;

			*b_ptr = b;
		}
		{
			char* anchor = (char*)memory + sizeof(int) + sizeof(double);

			long long* c_ptr = (long long*)anchor;

			*c_ptr = c;
		}

		char* anchor = (char*)memory;

		int* a_ptr = (int*)anchor;

		// a = 42
		std::cout << "a = " << *a_ptr << '\n';

		// shift += 4
		anchor += sizeof(int);

		double* b_ptr = (double*)anchor;

		// b = 13.5
		std::cout << "b = " << *b_ptr << '\n';

		// shift += 8
		anchor += sizeof(double);

		// c = 90
		std::cout << "c = " << *(long long*)anchor << '\n';

		operator delete(memory);
	}*/

	/* {
		short value = 16232;

		short* ptr = &value;

		char* c_ptr = (char*)ptr;

		std::cout << *c_ptr;
	}*/
}