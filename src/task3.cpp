#include "task2.h"
#include <iostream>
using namespace std;
unsigned long long sumPrime(unsigned int hbound){
	int num = 2;
	int sum = 2;
	while (1) {
		num = nextPrime(num);
		cout << num << endl;
		if (num > hbound) {
			break;
		}
		sum = sum + num;
	}
	return sum;
}