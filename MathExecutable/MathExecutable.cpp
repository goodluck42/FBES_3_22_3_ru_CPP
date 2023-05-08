#include <iostream>
#include <iomanip>
#include "mymath.h"


int main()
{
    //std::cout << add(5, 10) << '\n';
    //std::cout << divide(15, 2) << '\n';
    //std::cout << mult(2, 3) << '\n';
    //std::cout << subtract(6, 15) << '\n';

    float a = 0.1;
    float b = 0.2;
    std::cout << std::setprecision(10);
    std::cout << a + b << '\n';

    if (a + b == 0.3)
    {
        std::cout << "equals" << '\n';
    }
    else
    {
        std::cout << "not equals" << '\n';
    }

    system("pause");
}