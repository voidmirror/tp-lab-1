#include "task2.h"

bool checkPrime(unsigned int value)
{
	bool flag = true;
	if (value < 2)
		flag = false;
	for (int i = 2; i*i <= value; i++)
	{
		if (value % i == 0)
			flag = false;
	}
	return flag;
}

unsigned long long nPrime(unsigned n)
{
	long int val = 2;
	int i = 1;
	while (i <= n)
	{
		if (checkPrime(val) == true)
			i++;
		val++;
	}
	return (val-1);
}

unsigned long long nextPrime(unsigned long long value)
{
	if (value <= 1)
	{
		return 2;
	}
	else
	{
		int next = value + 1;
		while (checkPrime(next) != true)
		{
			next++;
		}
		return(next);
	}
}