#include "task2.h"
#include <iostream>

using namespace std;

//bool checkPrime(unsigned int value) {
//	for (unsigned int i = 2;i*i <= value;i++) {
//		if (value%i == 0) return 0;
//	}
//	return 1;
//}

bool checkPrime(unsigned long long value) { 
	for (unsigned int i = 2;i*i <= value;i++) {
		if (value%i == 0) return 0;
	}
	return 1;
}

unsigned long long nPrime(unsigned n) {
	unsigned long long value = 0;
	for (unsigned long long i = 2;n;i++) {
		if (checkPrime(i)) {
			n--;
			value = i;
		}
	}
	return value;
}

unsigned long long nextPrime(unsigned long long value) {
	for (unsigned long long i = value + 1;;i++) {
		if (checkPrime(i))return i;
	}
}