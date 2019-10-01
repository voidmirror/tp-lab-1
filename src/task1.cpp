#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max) {
	unsigned int start, plus;
	bool flag;
	start = max;
	plus = max;
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