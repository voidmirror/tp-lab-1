#include "task2.h"
#include <iostream>
using namespace std;

bool checkPrime(unsigned int value){
	for (unsigned long long i = 2; i * i <= value; i++)
		if (value % i == 0)
			return 0;
	return 1;

}
unsigned long long sumPrime(unsigned int hbound){
	unsigned long long answer = 0;
	for (unsigned long long i = 2; i < hbound; i++)
		if (checkPrime(i))
			answer += i;

	return answer;
}