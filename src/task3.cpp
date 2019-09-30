#define _CRT_SECURE_NO_WARNINGS

#include "task3.h"
#include "task2.h"

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long sum = 0;
	unsigned long long num = 2;
	while (num < hbound)
	{
		sum += num;
		num = nextPrime(num);
	}
	return sum;
}