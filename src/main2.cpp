#define _CRT_SECURE_NO_WARNINGS

#include "task2.h"
#include <iostream>

using namespace std;

int main()
{
	checkPrime(11) ? cout << "true\n" : cout << "false\n";
	checkPrime(15) ? cout << "true\n" : cout << "false\n";
	cout << nPrime(9) << "\n";
	cout << nextPrime(14);
	return 0;
}