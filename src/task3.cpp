#include "task3.h"
#include "task2.h"

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long sum = 0;
	unsigned int i = 1;
	unsigned long long el = nPrime(i);
	while (el < hbound)
	{
		sum += el;
		i++;
		el = nPrime(i);
	}
	return sum;
}
