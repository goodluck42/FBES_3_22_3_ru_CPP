#include <iostream>

struct User
{
    char* name;
    char* surname;
    int age;
};

void print(User* user)
{
    std::cout << user->name << '\n';
    std::cout << user->surname << '\n';
    std::cout << user->age << '\n';
    std::cout << '\n';
}

const size_t ROOM_COUNT = 3;
const size_t ADDRESS_SIZE = 32;

struct Flat
{
    struct Room
    {
        double area;
        int doors;
    };

    Room rooms[ROOM_COUNT]; // ROOM_COUNT = 3
    int floor;
    char address[ADDRESS_SIZE]; // ADDRESS_SIZE = 32
};



void fill_Flat(Flat& flat, Flat::Room* rooms, int floor, const char* address)
{
    strcpy_s(flat.address, ADDRESS_SIZE, address);
    flat.floor = floor;

    for (size_t i = 0; i < ROOM_COUNT; ++i)
    {
        flat.rooms[i] = rooms[i];
    }
}

void print(Flat& flat)
{
    std::cout << "address = " << flat.address << '\n';
    std::cout << "floor = " << flat.floor << '\n';

    for (size_t i = 0; i < ROOM_COUNT; ++i)
    {
        std::cout << "Room #" << i + 1 << '\n';
        std::cout << "Area = " << flat.rooms[i].area << '\n';
        std::cout << "Doors = " << flat.rooms[i].doors << '\n';
    }
}

void print(Flat* flats, size_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        print(flats[i]);
    }
}

struct
{
    void* data;
    size_t len;
} object;


//struct Object
//{
//    void* data;
//    size_t len;
//};

typedef struct Object
{
    void* data;
    size_t len;
} Object_t;

void foo(Object_t* obj)
{

}
void foo(int& ptr)
{
    ptr = 15;
}


int main()
{
    int* test = new int{ 90 };

    foo(*test);

    std::cout << *test;
    int* a = new int{ 5 };


    //object.len = 42;

    //std::cout << object.len << '\n';

    //Flat flat1{};

    //Flat::Room rooms[ROOM_COUNT]
    //{
    //    { 20.5, 1 }, // rooms[0]
    //    { 30.6, 2 }, // rooms[1]
    //    { 50.1, 1 }, // rooms[2]
    //};

    //fill_Flat(flat1, rooms, 3, "28 may");

    /*rooms[0].area = 20.5;
    rooms[0].doors = 1;
    
    rooms[1].area = 30.6;
    rooms[1].doors = 2;
    
    rooms[2].area = 50.1;
    rooms[2].doors = 1;*/

    // print(flat1); 


    /* {
        // #1
        User* user1 = new User;

        user1->name = new char[32] { "Vadick" };
        user1->surname = new char[32] { "Siga" };
        user1->age = 24;
        // #2
        User* user2 = new User;

        user2->name = new char[32] { "Emi" };
        user2->surname = new char[32] { "Test" };
        user2->age = 21;

        User** users = new User * [2];

        users[0] = user1; // User* 
        users[1] = user2; // User*

        // users[0] ? User*
        // users[1] ? User*

        print(users[0]);
        print(users[1]);
    }*/
}