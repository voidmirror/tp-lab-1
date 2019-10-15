#define _CRT_SECURE_NO_WARNINGS

#include "task2.h"
#include <iostream>

int main()
{
	checkPrime(11) ? std::cout << "true\n" : std::cout << "false\n";
	checkPrime(15) ? std::cout << "true\n" : std::cout << "false\n";
	std::cout << nPrime(9) << "\n";
	std::cout << nextPrime(14);
	return 0;
}