#include <iostream>

/// C VERSION
//enum MenuOption
//{
//    OPEN_FILE = 1,
//    READ_FILE = 2,
//    WRITE_FILE = 3,
//    EXIT = 4
//};
//
//int main()
//{
//    std::cout << "1. Open file" << '\n';
//    std::cout << "2. Read file" << '\n';
//    std::cout << "3. Write to file" << '\n';
//    std::cout << "4. Exit" << '\n';
//
//
//    MenuOption op;
//
//    {
//        int op1;
//
//        std::cin >> op1;
//
//        op = (MenuOption)op1;
//    }
//
//    int OPEN_FILE = 123; // error here
// 
//    switch (op)
//    {
//        case OPEN_FILE:
//        {
//            std::cout << "File opened!" << '\n';
//            break;
//        }
//            
//        case READ_FILE:
//        {
//            std::cout << "Read file!" << '\n';
//            break;
//        }
//        
//        case WRITE_FILE:
//        {
//            std::cout << "Written to file" << '\n';
//            break;
//        }
//            
//        case EXIT:
//        {
//            std::cout << "Exited" << '\n';
//            break;
//        }
//
//        default:
//        {
//            std::cout << "Invalid command\n";
//        }  
//    }
//}


// C++ VERSION

enum class MenuOption
{
    OPEN_FILE = 1,
    READ_FILE = 2,
    WRITE_FILE = 3,
    EXIT = 4
};

int main()
{
    system("color 0A");

    std::cout << "1. Open file" << '\n';
    std::cout << "2. Read file" << '\n';
    std::cout << "3. Write to file" << '\n';
    std::cout << "4. Exit" << '\n';


    MenuOption op;

    {
        int op1; // 2

        std::cin >> op1;

        op = (MenuOption)op1;
    }

    //int OPEN_FILE = 123;

    switch (op)
    {
        case MenuOption::OPEN_FILE:
        {
            std::cout << "File opened!" << '\n';
            break;
        }

        case MenuOption::READ_FILE:
        {
            std::cout << "Read file!" << '\n';
            break;
        }

        case MenuOption::WRITE_FILE:
        {
            std::cout << "Written to file" << '\n';
            break;
        }

        case MenuOption::EXIT:
        {
            std::cout << "Exited" << '\n';
            break;
        }

        default:
        {
            std::cout << "Invalid command\n";
        }
    }
}