/*#include <iostream>

int main(int argc, char** argv)
{
	// std::cout << argc << '\n';

	// for (size_t i = 0; i < argc; ++i)
	// {
	//	std::cout << "argument " << i << " = " << argv[i] << '\n';
	// }

	int a = atoi(argv[1]);
	char op = argv[2][0];
	int b = atoi(argv[3]);

	switch (op)
	{
		case '+':
			std::cout << a + b;
			break;
		case '-':
			std::cout << a - b;
			break;
		case '*':
			std::cout << a * b;
			break;
		case '/':
			if (b == 0)
			{
				std::cout << "Cant divide by zero";

				return -1;
			}
			else
			{
				std::cout << a / b;
			}

	}

	std::cout << '\n';

	system("pause");

	return 0;
}
*/

#include <iostream>
//#include <cstdio>
#include <stdio.h>


const char* PATH = "students.bin";

struct Person
{
	char name[32];
	int age;
};

bool write_Person(Person& person)
{
	FILE* file = nullptr;

	fopen_s(&file, PATH, "ab");

	if (file != nullptr)
	{
		fwrite(&person, sizeof(Person), 1, file);
		fflush(file);
		fclose(file);

		return true;
	}

	return false;
}


template<typename T> void reallocate(T*& data, size_t& len, size_t& capacity)
{
	if (len == capacity)
	{
		T* new_data = new T[capacity * 2];

		for (size_t i = 0; i < capacity; ++i)
		{
			new_data[i] = data[i];
		}

		delete[] data;
		data = new_data;
		capacity = capacity * 2;

		std::cout << "REALLOCATED" << '\n';
	}
}

template<typename T> T* create_array(size_t& capacity)
{
	return new T[capacity];
}

template<typename T> void append(T*& data, size_t& len, T element, size_t& capacity)
{
	reallocate<T>(data, len, capacity);

	data[len] = element;

	++len;


	//if (len < capacity)
	//{
	//	data[len] = element;

	//	++len;
	//}
	//else
	//{
	//	T* new_data = new T[capacity * 2];

	//	for (size_t i = 0; i < capacity; ++i)
	//	{
	//		new_data[i] = data[i];
	//	}

	//	new_data[len] = element;

	//	capacity = capacity * 2;

	//	delete[] data;
	//	data = new_data;

	//	++len;
	//}
}

Person* read_Persons(size_t& len, size_t& capacity)
{
	FILE* file = nullptr;

	fopen_s(&file, PATH, "rb");

	if (file != nullptr)
	{
		Person* persons = create_array<Person>(capacity); // person array

		int i = 0;

		Person* person = new Person{}; // person buffer
		while (true)
		{

			size_t bytes_read = fread(person, sizeof(Person), 1, file);
			// fseek;
			/*size_t bytes_read = fread(person, sizeof(char), sizeof(Person), file);*/

			if (bytes_read == 0)
			{
				break;
			}
			++i;

			append(persons, len, *person, capacity);

		}
		delete person;

		fclose(file);

		return persons;
	}

	return nullptr;
}


// fopen_s - open file
// 
// fgetc - read a char
// fgets - read a strign

// fputc - write a char
// fputs - write a string

// fgetpos
// fsetpos

// w - write
// r - read
// a - write+append
// w+ - write & read 
// r+ - read & write
// a+ - append & read

void print(int* array, size_t len)
{
	for (size_t i = 0; i < len; ++i)
	{
		std::cout << array[i] << '\n';
	}
}

void print_Person(Person& person)
{
	std::cout << "name = " << person.name << '\n';
	std::cout << "age = " << person.age << '\n';
}

int main()
{
	/*Person p1{"Vadim", 22};
	Person p2{ "Aziz", 26 };
	Person p3{ "Test", 23 };

	write_Person(p1);
	write_Person(p2);
	write_Person(p3);
	*/

	// READ PERSONS FROM FILE
	size_t len = 0;
	size_t capacity = 6;

	Person* persons_from_file = read_Persons(len, capacity);

	for (size_t i = 0; i < len; ++i)
	{
		print_Person(persons_from_file[i]);
	}

	delete[] persons_from_file;



	/*FILE* file = nullptr;

	fopen_s(&file, PATH, "r+");

	int i = 0;
	while (true)
	{
		char* byte = new char;

		size_t read = fread_s(byte, 1, 1, 1, file);

		if (read == 0)
		{
			break;
		}
		++i;
		std::cout << (int)*byte << '\n';
	}


	std::cout << "size = " << i << '\n';;
	std::cout << "struct = " << sizeof(Person) << '\n';;
	fclose(file);*/

	// fread
	//{
	//	FILE* file = nullptr;

	//	fopen_s(&file, PATH, "r+");

	//	if (file != nullptr)
	//	{
	//		Person* person = new Person;

	//		//fread(person, sizeof(Person), 1, file);
	//		
	//		fpos_t current_pos;

	//		fgetpos(file, &current_pos);


	//		current_pos += sizeof(Person);

	//		fsetpos(file, &current_pos);

	//		fread(person, sizeof(Person), 1, file);

	//		std::cout << person->name << '\n';
	//		std::cout << person->age << '\n';

	//		fclose(file);

	//		delete person;
	//	}
	//}
	// APPEND 
	/* {
		size_t len = 0;
		size_t capacity = 3;

		int* array = create_array<int>(capacity);

		append(array, len, 42, capacity);
		append(array, len, 12, capacity);
		append(array, len, 13, capacity);
		append(array, len, 20, capacity);

		print(array, len);

		std::cout << "len = " << len << '\n';
		std::cout << "capacity = " << capacity << '\n';

		delete[] array;
	}*/

	/*short* a = new short{ 9042 };

	std::cout << *a << '\n';
	std::cout << *(int*)a << '\n';*/

	// CAST PERSON* TO CHAR*
	/*Person* person1 = new Person{ "Vadim", 24 };

	char* data = (char*)person1;

	for (size_t i = 0; i < sizeof(Person); ++i)
	{
		if (i < 32)
		{
			std::cout << i << " = " << data[i] << '\n';

			continue;
		}

		std::cout << *(int*)(data + i);

		break;

	}*/


	// ADD TO FILE
	/* {
		bool flag = true;

		while (flag)
		{
			int op;

			std::cin >> op;
			std::cin.ignore();

			switch (op)
			{
				case 1:
				{
					Person person;

					std::cout << "Enter name -> ";
					std::cin.getline(person.name, 32);

					std::cout << "Enter age -> ";

					std::cin >> person.age;
					std::cin.ignore();

					write_Person(person);

					break;
				}

				case 0:
				{
					flag = false;
				}
			}
		}
	}*/

	// -------------------------------
	// Открытыие файла
	// w - write and truncate (creates a file if not exists)
	// r - read (error if file does not exist)
	// a - append
	// w+ - write and read
	// r+ - read and write
	// a+ - write, read, append

	//-------------------------------------
	// READ
	//FILE* file = nullptr;

	//fopen_s(&file, "data.txt", "r");

	//if (file == nullptr)
	//{
	//	std::cout << "Cant open file" << '\n';
	//}
	//else
	//{
	//	// file get char

	//	/*{
	//		// First variant (hard)
	//		// char c;
	//		// while ((c = fgetc(file)) != EOF)
	//		// {
	//		//	std::cout << c;
	//		//}

	//		// Easy one
	//		while (true)
	//		{
	//			char c = fgetc(file);

	//			if (c == EOF)
	//			{
	//				break;
	//			}

	//			std::cout << c;
	//		}
	//	}*/

	//	// file get string (line)
	//	/* {
	//		char* data = new char[32] {};

	//		while (true)
	//		{
	//			char* line = fgets(data, 32, file);

	//			if (line == nullptr) // EOF
	//			{
	//				break;
	//			}

	//			std::cout << line;
	//		}

	//		// same address
	//		// std::cout << (void*)data << '\n';
	//		// std::cout << (void*)text << '\n';

	//		delete[] data;
	//	}*/

	//	// file get position
	//	/* {
	//		size_t count = 0;

	//		while (true)
	//		{
	//			char c = fgetc(file);

	//			if (c == EOF)
	//			{
	//				break;
	//			}

	//			++count;
	//		}

	//		std::cout << "count = " << count << '\n';
	//	}*/

	//	fclose(file);
	//}

	//-------------------------------------

	//FILE* file = nullptr;

	//fopen_s(&file, "some_data.txt", "w+");

	//if (file == nullptr)
	//{
	//	std::cout << "Cant open file";
	//}
	//else
	//{
	//	fputs("Hello C++", file);

	//	fpos_t position;

	//	fgetpos(file, &position);

	//	fpos_t shift_pos = position - 3;

	//	fsetpos(file, &shift_pos);

	//	fputs("C# ", file);

	//	std::cout << position;

	//	// fputc('#', file);

	//	// fputs("Hello C++\n", file);
	//	
	//	/*int i = 0;

	//	while (i < 3'000'000)
	//	{
	//		fputs("Hello C++", file);

	//		++i;
	//	}*/

	//	fclose(file);
	//}
}