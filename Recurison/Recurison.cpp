#include <iostream>


void foo(int a)
{
    a = 13;
}

void foo(int arr[])
{
    arr[0] = 90;
}

void B(int);
void C();

// BCA - Мирджалал, Мира

void A(int a)
{
    int c = 42;
    B(a);
    std::cout << "A" << '\n';
}

void B(int x)
{
    std::cout << "B" << '\n';
    C();
}

void C()
{
    std::cout << "C" << '\n';
}


int counter;

void foo() // 3759
{
    double a[128];

    std::cout << counter++ << '\n';

    foo();
}

long long factorial(long long n) // n = 4; 4 * 3 * 2 * 1
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    return factorial(n - 1) * n;
}


template <typename T> void foo2()
{
    std::cout << "template <typename T> void foo2()\n";
}

void foo2()
{
    std::cout << "void foo2()\n";
}

int main()
{

    foo2<int>();
    foo2();
    /*{
        int a = 42;
        foo(a);
        std::cout << a << '\n';
    }*/

    /*{
        int arr[3] = { 42, 13, 50 };

        foo(arr);

        std::cout << arr[0] << " " << arr[1] << " " << arr[2] << '\n';
    }*/
   /* int a = 50;
    A(a);*/

    //foo();


    int result = factorial(4);

    std::cout << result;
}