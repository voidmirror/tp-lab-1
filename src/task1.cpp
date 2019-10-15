#include <iostream>
#include "task1.h"
using namespace std;


unsigned long findValue(unsigned int min, unsigned max) {
	unsigned curr = 2 * max;
	while (!checkDivision(min, max, curr)) {
		curr += 1;
	}
	return curr;
}


bool checkDivision(unsigned min, unsigned max, unsigned num) {
	for (unsigned i = min; i < max + 1; i++) {
		if (num % i != 0) return false;
	}
	return true;
}