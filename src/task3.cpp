#include "task2.h"
#include "task3.h"
#include <iostream>
using namespace std;

unsigned long long sumPrime(unsigned int hbound){
	unsigned long long answer = 0;
	for (unsigned long long i = 2; i < hbound; i++)
		if (checkPrime(i))
			answer += i;

	return answer;
}
