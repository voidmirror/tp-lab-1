#include "task2.h"
#include "task3.h"

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long sum = 0;
	long int i;
	for (i = 1; i < hbound; i++)
	{
		if (checkPrime(i))
			sum = sum + i;
	}
	return sum;
}