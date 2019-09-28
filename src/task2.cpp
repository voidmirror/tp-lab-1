#include "task2.h"
bool checkPrime(unsigned int value)
{
	if (value <= 1 )
	{
		return false;
	}
	for (unsigned int i = 2; i*i <= value; i++)
	{
		if (value % i == 0)
		{
			return false;
		}
	}
	return true;
}
unsigned long long nPrime(unsigned n)
{
	int ans = 2;
	int count = 0;
	while (count != n)
	{
		if (checkPrime(ans))
		{
			count++;
		}
		ans++;
	}
	ans--;
	return ans;
}
unsigned long long nextPrime(unsigned long long value)
{
	unsigned long long ans = value + 1;
	while (!checkPrime(ans))
	{
		ans++;
	}
	return ans;
}