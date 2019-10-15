#include "task2.h"
#include <iostream>
using namespace std;
unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long sum = 2;
	for (int i = 3; i < hbound; i=i+2) {
		if (checkPrime(i)) {
			sum = sum + i;
		}
	}
	return sum;
}