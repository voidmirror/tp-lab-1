#include "task3.h"
#include "task2.h"

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long sum = 0;
	unsigned long long el = 2;
	while (el < hbound)
	{
		sum += el;
		el = nextPrime(el);
	}
	return sum;
}
