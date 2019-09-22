#define _CRT_SECURE_NO_WARNINGS

#include "task4.h"
#include <iostream>

int main()
{
	char a[] = "1234567890";
	char b[] = "123789456123";
	std::cout << a << " + " << b << " = " << sum(a, b);
	return 0;
}