#include <iostream>

int main()
{
    /*int a;

    std::cin >> a;
    //if (!(a % 2))
    if (a % 2 == 1)
    {
        std::cout << "even(chetnoe)" << '\n';
    }
    else
    {
        std::cout << "odd(nechetnoe)" << '\n';
    }*/


    // or -> ||
    // not -> !
    // and -> &&


   /* int b = 64 || 0;

    std::cout << std::boolalpha;

    std::cout << (bool)b;*/

    /*double a;

    std::cin >> a;

    const double PI = a;

    std::cout << PI;*/


    /////////////
    std::cout << "1. Open file" << '\n';
    std::cout << "2. Read file" << '\n';
    std::cout << "3. Write to file" << '\n';
    std::cout << "4. Exit" << '\n';

    //int firstOp = 13;

    //const int op1 = firstOp;

    constexpr int op1 = 1;

    int op; // 3

    std::cin >> op;

    constexpr int value = 40;

    switch (op)
    {
        case op1: // if (op == 1)
            std::cout << "File opened!" << '\n';
            break;
        case 2: // else if (op == 2)
            std::cout << "Read file!" << '\n';
            break;
        default: // else
            std::cout << "Invalid command\n";
            break;
        case 3: // else if (op == 3)
            std::cout << "Written to file" << '\n';
            break;
        case 4: // else if (op == 4)
            std::cout << "Exited" << '\n';

        /*case (value > 0): // not working
        {

        }*/

        case '@':
        {

        }
        case 64:
        {

        }

        case 19L:
        {

        }
    }


}