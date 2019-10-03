#include "task3.h"

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
	bool flag = true;
	for (long long i = 3; i < hbound; i += 2)
	{
		for (long long j = 2; j <= sqrt(i); j++)
			if (value % j == 0)
			{
				flag = 1;
				break;
			}
			flag = 0;
		if (!flag)
			sum += i;
	}
	cout << sum << endl;
	return sum;
}
