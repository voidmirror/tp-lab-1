#include <iostream>
#include <cmath>
#include "task2.h"
using namespace std;

bool checkPrime(unsigned int value) {
	for (unsigned i = 2; i <= sqrt(value); i++) {
		if (value % i == 0) return false;
	}
	return true;
}


unsigned long long nPrime(unsigned n) {
	unsigned int i = 1, num = 0;
	while (num < n) {
		i++;
		if (checkPrime(i)) num++;
	}
	return i;
}


unsigned long long nextPrime(unsigned long long value) {
	unsigned long long i = value + 1;
	while (!checkPrime(i)) i++;
	return i;
}