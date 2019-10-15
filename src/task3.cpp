#include <iostream>
#include "task3.h"
using namespace std;

unsigned long long sumPrime(unsigned int hbound) {
	unsigned long long i, sum = 0;
	for (i = 2; i < hbound; i++) {
		if (checkPrime(i)) sum += i;
	}
	return sum;
}