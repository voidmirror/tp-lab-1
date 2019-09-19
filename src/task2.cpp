#include "task2.h"
#include <math.h>

bool checkPrime(unsigned int value) 
{
	for (unsigned int i = 2; i <= sqrt(value); i++)
		if (value%i == 0)
			return false;
	return true;
}
unsigned long long nPrime(unsigned n)
{
	if (n == 1) return 2;
	unsigned long long prime = 3;
	unsigned i = 2;

	while (i<n){
		i++;
		prime += 2;
		while (!checkPrime(prime))
		{
			prime += 2;
		}
	}
	return prime;

}

unsigned long long nextPrime(unsigned long long value)
{
	if (value % 2 == 0) value--;
	value +=2;
	while (!checkPrime(value))
	{
		value += 2;
	}
	return value;
}