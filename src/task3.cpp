#include "task2.h"
#include <iostream>
using namespace std;
unsigned long long sumPrime(unsigned int hbound){
	if (hbound <= 2){
		return 0;
	}
	int num = 2;
	int sum = 2;	
	while (1) {
		num = nextPrime(num);		
		if (num >= hbound) {
			break;
		}
		sum = sum + num;
	}
	return sum;
}