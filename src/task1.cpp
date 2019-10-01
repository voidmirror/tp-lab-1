#include "task1.h"
#include <iostream>

using namespace std;


unsigned long long GCD(unsigned long long m, unsigned long long n)
{
	return (n != 0) ? GCD(n, m%n) : m;
}

unsigned long long NOC(unsigned long long num1, unsigned long long num2) {
	return num1 * num2 / GCD(num1, num2);
}




unsigned long findValue(unsigned int min, unsigned int max) {
	unsigned long long noc;
	noc = NOC(min, min + 1);
	for ( long i = min + 1; i < max; i++)
	{
		noc = NOC(noc, i + 1);
		//std::cout << "NOC:["<< i << ", " << noc << "]\n";
	}
	return noc;
}