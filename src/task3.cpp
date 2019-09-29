#include "task2.h"
#include "task3.h"

unsigned long long sumPrime(unsigned int hbound)
{
	long long int sum = 0;
	for (long int i = 2; i < hbound; i++)
	{
		if (checkPrime(i) == true)
			sum = sum + i;
	}
	return sum;
}