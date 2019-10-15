#include "task4.h"
#include <string.h>
#include <stdlib.h>
#include <iostream>

char* sum(char* x, char* y) {

	long long len_x = strlen(x);
	long long len;
	long long len_y = strlen(y);
	if (len_x > len_y) {
		len = len_x + 2;
	}
	else {
		len = len_y + 2;
	}
	
	char* char_sum = new char [len];
	char_sum[len - 1] = '\0';
	int prev_val = 0;

	//std::cout << len_x << " " << len_y << std::endl;
	for (long long i = 1; i < len; i++) {
		int dig_x = 0;
		int dig_y = 0;
		if (len_x - i >= 0) {
			dig_x = (int)x[len_x - i] - 48;
			//std::cout << dig_x << " " << len_x - i << std::endl;
		}
		if (len_y - i >= 0) {
			dig_y = (int)y[len_y - i] - 48;
			//std::cout << dig_y << " " << len_y - i << std::endl;
		}

		int int_sum = dig_x + dig_y + prev_val;
		int rem = int_sum % 10;
		
		//std::cout << dig_x << " " << dig_y << " " << rem << std::endl;
		prev_val = int_sum / 10;
		char_sum[len - i - 1] = rem + '0';
		if (char_sum[0] == '0') {
			for (unsigned long long i = 0; i <= len - 1; i++) {
				char_sum[i] = char_sum[i + 1];
			}
		}
	}
	return char_sum;

}