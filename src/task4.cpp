#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include "task4.h"

using namespace std;

int countCifer(char* str) {
	char sym;
	int counter = 0;
	/*do {
		sym = str[i];
		i++;
	} while (sym != '\0');
	return i - 1;*/

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			if (!((str[i + 1] > '9' || str[i + 1] < '0') && str[i] == '0')) {
				counter++;
			}
		}
	}
	return counter;
}

//int countCifer222222(char* str) {
//	char sym;
//	int counter = 0;
//	/*do {
//	sym = str[i];
//	i++;
//	} while (sym != '\0');
//	return i - 1;*/
//
//	for (int i = 0; i < strlen(str); i++) {
//		if (str[i] >= '0' && str[i] <= '9') {
//			counter++;
//		}
//	}
//	return counter;
//}

//char* reverseChar(char* str) {
//	char *_temp;
//
//	_temp = (char*)malloc(sizeof(char)*strlen(str) + 1);
//	for (int i = 0; i < strlen(str); i++) {
//		_temp[i] = str[strlen(str) - 1 - i];
//		//cout << "str: " << str[strlen(str) - 1 - i] << endl;
//		//cout << "temp: " << _temp[i] << endl;
//	}
//	_temp[strlen(str)] = '\0';
//	
//	return _temp;
//}

void reverseChar2(char* str) {
	vector <char> copy;
	copy.resize(countCifer(str));
	for (int i = 0; i < countCifer(str); i++) {
		copy[i] = str[i];
	}
	reverse(copy.begin(), copy.end());
	for (int i = 0; i < countCifer(str); i++) {
		str[i] = copy[i];
	}
	
}

char* sum(char *x, char *y) {
	char *result;
	int amount, sumCounter, ifX;
	char reserve;

	if (strlen(x) >= strlen(y)) {
		amount = strlen(x) + 1;
		sumCounter = strlen(y);
		ifX = 1;
	}
	else {
		amount = strlen(y) + 1;
		sumCounter = strlen(x);
		ifX = 0;
	}
	result = (char*)malloc(sizeof(char)*amount);
	for (int i = 0; i < amount; i++) {
		result[i] = '0';
	}

	/*x = reverseChar2(x);
	y = reverseChar2(y);*/
	reverseChar2(x);
	reverseChar2(y);
	cout << x << " " << y << " " << amount << endl;			//norm

	int remainder = 0;
	for (int i = 0; i < amount - 1; i++) {
		if (i < sumCounter) {
			reserve = result[i] - '0' + x[i] + y[i] - '0';
			cout << "reserve: " << reserve << endl;
			if (reserve > '9') {
				result[i] = reserve/* - ('9' - '0' - 1)*/ - 10;
				result[i + 1]++;
				//int _tempReserve = i + 1;
				//int _tempStrlen = strlen(result);
				//for (int _tempReserveIndex = i + 1; _tempReserveIndex <= amount; _tempReserveIndex) {
				//	if (result[_tempReserveIndex] > '9') {
				//		result[_tempReserveIndex] = result[_tempReserveIndex]/* - ('9' - '0' - 1)*/ - 10;
				//		result[_tempReserveIndex + 1]++;
				//		//_tempReserve++;
				//	}
				//}
			}
			else {
				result[i] = reserve;
			}
		}
		else {
			if (ifX == 1) {
				result[i] = result[i] + x[i] - '0';
				if (result[i] > '9') {
					result[i] = result[i] - 10;
					result[i + 1]++;
				}
			}
			else {
				result[i] = result[i] + y[i] - '0';
				if (result[i] > '9') {
					result[i] = result[i] - 10;
					result[i + 1]++;
				}
			}
		}
	}

	//result = reverseChar2(result);
	reverseChar2(result);
	result[countCifer(result)] = '\0';
	return result;
}