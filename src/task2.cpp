#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"

bool checkPrime(unsigned int value)
{
	if ((value <= 0) || (value == 1))
		return false;
	for (int i = 2; i < value; i++){
			if (value % i == 0)
				return false;
		}
	return true;
}

unsigned long long nPrime(unsigned n)
{	
	int i = 0;
	int cnt = 0;
	while (cnt != n){
		if (checkPrime(i)){
			cnt++;
		}
		i++;
	}
	return i-1;
}

unsigned long long nextPrime(unsigned long long value)
{
	while (1)
	{
		value++;
		if (checkPrime(value))
			return value;
	}
}