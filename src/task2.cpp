#include <iostream>
#include <math.h>
#include "task2.h"

int Prime(unsigned long a, unsigned long i)
{
	return i*i <= a ? (a%i) && Prime(a, i + 1) : 1;
}

bool checkPrime(unsigned int value) {
	return static_cast<bool>(Prime(value, 2));	
}

unsigned long long nPrime(unsigned n) {
	int counter = 0;
	unsigned long long num = 1;
	while (counter < n) {
		num++;
		if (checkPrime(num)) {
			counter++;
		}
	}
	return num;
}

unsigned long long nextPrime(unsigned long long value) {
	unsigned int num = static_cast<int>(ceil(value)) + 1;
	while (1) {
		if (checkPrime(num)) {
			return static_cast<unsigned long long>(num);
		}
		num++;
	}
}