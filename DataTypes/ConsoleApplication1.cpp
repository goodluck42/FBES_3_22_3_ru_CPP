// Single line comment

/* 
Multiline
comment
*/

#include <iostream>
#include <iomanip>

int main()
{
	/* Input & Output*/
	// CTRL K + C
	// CTRL K + U
	//std::cout << "Hello World!\n";
	//std::cout << "Hello C++";

	/*std::cout << "Hello World!"
		<< '\n'
		<< "Hello C++"
		<< 22
		<< '\n';

	
	int value;

	std::cout << "Enter value -> ";
	std::cin >> value;

	std::cout << "Entered value = " << value << '\n';*/
	/* Data types */



	// [long long] 8 bytes

	long long llmax = LLONG_MAX;
	long long llmin = LLONG_MIN;

	std::cout << "long long size = " << sizeof(long long) << '\n';
	std::cout << "LLONG_MAX = " << llmax << '\n';
	std::cout << "LLONG_MIN = " << llmin << '\n';

	// [long] 4 bytes
	long lmax = LONG_MAX;
	long lmin = LONG_MIN;

	std::cout << "LONG_MAX = " << lmax << '\n';
	std::cout << "LONG_MIN = " << lmin << '\n';

	// [int] 2 or 4 bytes
	int imax = INT_MAX; // 2147483647
	int imin = INT_MIN; // -2147483648

	std::cout << "INT_MAX = " << imax << '\n';
	std::cout << "INT_MIN = " << imin << '\n';


	// [short] 2 bytes

	short smax = SHRT_MAX; // 32767
	short smin = SHRT_MIN; // -32768

	std::cout << "SHRT_MAX = " << smax << '\n';
	std::cout << "SHRT_MIN = " << smax << '\n';


	// [char] 1 byte

	char cmax = CHAR_MAX; // 127
	char cmin = CHAR_MIN; // -128

	std::cout << "CHAR_MAX = " << (int)cmax << '\n'; 
	std::cout << "CHAR_MIN = " << (int)cmin << '\n';

	// [unsigned char] 1 byte

	unsigned char ucmax = UCHAR_MAX;

	std::cout << "UCHAR_MAX = " << (int)ucmax << '\n';

	// [unsigned short] 2 bytes

	unsigned short usmax = USHRT_MAX;

	//std::cout << "USHRT_MAX = " << (short)usmax + (short)100 << '\n';
	std::cout << "USHRT_MAX = " << usmax << '\n';
	
	// [unsinged int] 2 or 4 bytes

	unsigned int uimax = UINT32_MAX;

	std::cout << "UINT32_MAX = " << uimax << '\n';

	// [unsigned long long] 8 bytes
	unsigned long long ullmax = UINT64_MAX;

	std::cout << "UINT64_MAX = " << ullmax << '\n';

	// [float] 4 bytes

	float fvalue = 13.9876543210f;

	// MAX      | TRIM
	// **.******|*******
	// **.******

	std::cout << "float = " << fvalue << '\n';

	// [double] 8 bytes
	double dvalue = 13.42;
	
	// [long double] 

	std::cout << sizeof(long double);
}