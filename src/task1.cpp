#include "task1.h"
#include <iostream>

using namespace std;

unsigned long findValue(unsigned int min, unsigned max) {
	unsigned long ans = 1;
	for (unsigned int i = min;i <= max;i++) {
		ans = lcm(ans, i);
	}
	return ans;
}

unsigned long gcd(unsigned long a, unsigned long b) {
	if (b == 0)return a;
	return gcd(b, a%b);
}
unsigned long lcm(unsigned long a, unsigned long b) {
	return a / gcd(a, b)*b;
}