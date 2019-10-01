#include "task2.h"

bool checkPrime(unsigned int value)
{
	if (value <= 3) {
		return true;
	}

	for (unsigned int i = 2; i <= value / 2 ; i++) {
		if (value % i == 0) {
			return false;
		}
	}

	return true;
}

unsigned long long nPrime(unsigned n) {
	unsigned new_n = n;
	unsigned long long num = 1;
	while (new_n!= 0) {
		
		if (checkPrime(num)) {
			new_n--;
		}	
		num += 1;
	}

	return num;
}

unsigned long long nextPrime(unsigned long long value) {
	unsigned long long new_prime = value;
	
	while (true) {
		new_prime += 1;
		if (checkPrime(new_prime)) {
			return new_prime;
		}
	}
}