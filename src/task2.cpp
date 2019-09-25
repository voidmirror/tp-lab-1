#include "task2.h"
#include <iostream>
using namespace std;

bool checkPrime(unsigned int value){
	for (unsigned long long i = 2; i * i <= value; i++)
		if (value % i == 0)
			return 0;
	return 1;

}
unsigned long long nPrime(unsigned n){
	unsigned long long i = 0;
	unsigned long long toCheck = 1;
	while (i != n)
	{
		toCheck++;
		if (checkPrime(toCheck)){
			i++;
		}
	}
	return toCheck;
}
unsigned long long nextPrime(unsigned long long value){
	unsigned long long toCheck = value;
	bool f = 1;
	while (f)
	{
		toCheck++;
		if (checkPrime(toCheck)){
			f = 0;
		}
	}
	return toCheck;
}