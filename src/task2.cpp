#include "task2.h"


bool checkPrime(unsigned int value) {
	if (value < 2)
		return 0;
	for (unsigned int i = 2; i * i <= value; i++) {
		if (value % i == 0)
			return 0;
	}
	return 1;
}
unsigned long long nPrime(unsigned n) {
	unsigned long long result = 1;
	int cnt = 0;
	while (cnt != n) {
		result++;
		if (checkPrime(result))
			cnt++;
	}
	return result;
}
unsigned long long nextPrime(unsigned long long value) { 
	value++;
	while (!checkPrime(value)) {
		value++;
	}
	return value;
}
