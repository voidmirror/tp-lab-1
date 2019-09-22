#define _CRT_SECURE_NO_WARNINGS

#include "task2.h"

bool checkPrime(unsigned int value)
{
	if (value <= 1)
		return false;

	for (int i = 2; i < value; i++)
		if (value % i == 0)
			return false;

	return true;
}

unsigned long long nPrime(unsigned n)
{
	int i = 2;
	int count = 0;
	while(count != n)
	{
		if (checkPrime(i))
		{
			count++;
		}
		i++;
	}
	i--;
	return i;
}

unsigned long long nextPrime(unsigned long long value)
{
	unsigned long long more = value+1;
	while (!checkPrime(more))
	{
		more++;
	}
	return more;
}