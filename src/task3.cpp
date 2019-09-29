#include "task2.h"
#include "task3.h"

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long sum = 0;
	long int i = 1;
	while(i < hbound)
	{
		i = nextPrime(i);
		sum = sum + i;
	}
	return sum;
}