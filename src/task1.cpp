#include "task1.h"

unsigned long gcd(unsigned long a, unsigned long b) {
	if (b == 0)
		return a;
	else
		return gcd (b, a % b);
}

unsigned long findValue(unsigned int min, unsigned int max) {
	long long result = min;
	for (int i = min+1; i <= max; i++) {
		result = i*result/gcd(i, result);
	}
	return result;
}
