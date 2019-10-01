#include "task3.h"

bool checkPrime(unsigned int value)
{
	for (long long i = 2; i <= sqrt(value); i++)
		if (value % i == 0)
			return false;
	return true;
}

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long sum = 0;
	if (hbound >= 2)
		sum = 2;
	else
	{
		cout << 0 << endl;
		return 0;
	}
	for (long long i = 3; i < hbound; i += 2)
	{
		if (checkPrime(i))
			sum += i;
	}
	cout << sum << endl;
	return sum;
}
