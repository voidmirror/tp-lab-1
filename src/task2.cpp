#include "task2.h"

bool checkPrime(unsigned int value) {
	if (value == 1) {
		return false;
	}
	for (unsigned int i=2; i*i <= value; i++) {
		if (value % i == 0) {
			return false;
		}
	}
	return true;
}

unsigned long long nPrime(unsigned n) {
	unsigned int find = 0, i = 1;
	while (1) {
		if (checkPrime(i)) {
			find += 1;
		}
		if (find == n) {
			return i;
		}
		i += 1; 
	}
}

unsigned long long nextPrime(unsigned long long value) {
	while (1) {
		if (checkPrime(value)) {
			return value;
		}
		value += 1;
	}
}
