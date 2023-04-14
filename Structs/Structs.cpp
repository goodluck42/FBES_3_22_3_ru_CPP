#include <iostream> 

struct User
{
	char* name;
	char* surname;
	int age;
};

User* create_User(const char* name, const char* surname, int age)
{
	User* user = new User; // 

	user->name = new char[64] {};
	user->surname = new char[64] {};

	strcpy_s(user->name, 64, name);
	strcpy_s(user->surname, 64, surname);

	user->age = age;

	return user;
}

void free_User(User* user)
{
	delete[] user->name;
	delete[] user->surname;

	delete user;
}

void free_User(User** users, size_t len)
{
	for (size_t i = 0; i < len; ++i)
	{
		free_User(users[i]);
	}

	delete[] users;
}

void print(User* user)
{
	std::cout << "age = " << user->age << '\n';
	std::cout << "name = " << user->name << '\n';
	std::cout << "surname = " << user->surname << '\n';
	std::cout << "-------------------------------------" << '\n';
}

void print(User** users, size_t len)
{
	for (size_t i = 0; i < len; ++i)
	{
		print(users[i]);
	}
}

struct Point
{
	int x;
	int y;
};

int main()
{
	/* {
		// HEAP init
		Point* point = new Point{ -5, 90 };

		point->x = -5;
		point->y = 90;

		delete point;

		// STACK init
		Point point2{ -5, 90 };
	}*/

	User** users = new User*[4]{};

	size_t i = 0;

	
	{
		srand(time(nullptr));

		int a = rand();
		int b = rand();
		int c = rand();
		int d = rand();
	}
	char name_input[64]{};
	char surname_input[64]{};
	int age_input{};

	while (i < 4)
	{
		std::cout << "#" << i + 1 << '\n';
		std::cout << "Enter name -> ";

		std::cin.getline(name_input, 64);

		std::cout << "Enter surname -> ";

		std::cin.getline(surname_input, 64);

		std::cout << "Enter age -> ";

		std::cin >> age_input;

		users[i++] = create_User(name_input, surname_input, age_input);
	}

	// i = len
	print(users, i);
	free_User(users, i);

	/*User* user1 = create_User("Vadim", "Siga", 25);
	User* user2 = create_User("Tamerlan", "Dlinniy", 16);
	User* user3 = create_User("Djavid", "Korotkiy", 16);

	print(user1);
	print(user2);
	print(user3);

	free_User(user1);
	free_User(user2);
	free_User(user3);*/
}
