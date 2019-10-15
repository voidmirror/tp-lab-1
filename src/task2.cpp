#include "task2.h"

bool checkPrime(unsigned int value)
{
	for (long long i = 2; i <= sqrt(value); i++)
		if (value % i == 0)
			return false;
	return true;
}

unsigned long long nPrime(unsigned n)
{
	long long count = 1;
	if (n == 1)
	{
		cout << 2 << endl;
		return 2;
	}
	else
	{
		long long i = 3;
		while(1)
		{
			if (checkPrime(i))
			{
				count++;
			}
			if (count == n)
			{
				cout << i << endl;
				return i;
			}
			i += 2;
		}
	}
}

unsigned long long nextPrime(unsigned long long value)
{
	if (value <= 1)
	{
		cout << 2 << endl;
		return 2;
	}
	if (value % 2 == 0)
		value++;
	else
		value += 2;
	while (1)
	{
		if (checkPrime(value))
		{
			cout << value << endl;
			return value;
		}
		value += 2;
	}
}