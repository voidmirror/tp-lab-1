#include <iostream>
#include "task1.h"

using namespace std;

unsigned long findValue(unsigned int min, unsigned max) {
	int mult = max - min + 1;
	int check = 1, desired = 1, result;

	int *dividers;
	dividers = (int*)malloc(sizeof(int)* mult);
	for (int i = min; i <= max; i++) {
		dividers[i - min] = i;
	}

	while (check) {
		for (int i = min; i <= max; i++) {
			result = desired % dividers[i - min];
			//cout << result << endl;
			if (result == 0) {
				check = 0;
			}
			else {
				check = 1;
				break;
			}
		}

		if (check == 0) {
			free(dividers);
			return desired;
		}
		check == 1;
		desired++;
		//cout << desired << endl;
	}
}