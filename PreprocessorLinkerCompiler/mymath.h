#ifndef MYMATH_H
#define MYMATH_H

int add(int a, int b);
int mult(int a, int b);

template<typename T> T div(T a, T b)
{
	return a / b;
}

#endif