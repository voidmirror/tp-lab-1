#include "task2.h"
bool checkPrime(unsigned int value){
	if (value == 1) return false;
	for (int i = 2; i <= value / 2; i++){
		if (!(value%i)){
			return false;
		}
	}
	return true;
}

unsigned long long nPrime(unsigned n){
	
	int a = 0, j;
	for (int p = 2;; p++){
		for (j = 2; j*j <= p; j++){
			if ((p%j) == 0) break;
		}
		if (j*j > p){
			a++;
			if (a == n){
				return p;
			}
		}
	}
	
}

unsigned long long nextPrime(unsigned long long value){
	while (1) {
		int c = 1;
		value++;
		for (int i = 2; i <= value; i++){
			if (value % i == 0){
				c++;
			}
		}
		if (c == 2){
			return value;
		}
	}
}



