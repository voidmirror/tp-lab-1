#include "task1.h"
unsigned int findSum(unsigned int min, unsigned max) {
	unsigned int sum = 0;
	for (unsigned int i = min; i <= max; i++) {
		sum += i;
	}
	return sum;
}

unsigned long findValue(unsigned int min, unsigned max) {
	unsigned int start, plus;
	bool flag;
	start = findSum(min, max);
	plus = start;
	flag = true;
	while (1) {
		for (unsigned int i = min; i <= max; i++) {
			if (start % i != 0) {
				start += plus;
				flag = false;
				break;
			}
			flag = true;
		}
		if (flag) {
			return start;
		}
	}
}