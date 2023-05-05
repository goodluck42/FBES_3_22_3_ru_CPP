#include <iostream>

// INTEGER, FLOAT, DOUBLE

#define DOUBLE

#ifdef INTEGER
void print(int a)
{
    std::cout << "I'm int func: " << a << '\n';
}
#elif defined(FLOAT)
void print(float a)
{
    std::cout << "I'm float func: " << a << '\n';
}
#elif defined(DOUBLE)
void print(double a)
{
    std::cout << "I'm double func: " << a << '\n';
}
#endif

#define MACRO int \
a \
= \
10 \
;

int main()
{
    int
        a
        =
        10
        ;
    print(a);
}