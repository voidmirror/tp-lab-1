#include "task2.h"

bool checkPrime(uint32_t value)
{
	for (uint32_t i = 2; i < value; i++)
		if (value % i == 0)
			return false;

	return true;
};
bool checkPrime64(uint64_t value)
{
	for (uint64_t i = 2; i < value; i++)
		if (value % i == 0)
			return false;

	return true;
};
uint64_t nPrime(uint32_t n)
{
	for (uint64_t i = 2; i < UINT64_MAX; i++)
		if (n > 1 && checkPrime64(i))
			n--;
		else if (checkPrime64(i))
			return i;

	return 0;
};
uint64_t nextPrime(uint64_t value)
{
	for (uint64_t i = value + 1; i < UINT64_MAX; i++)
		if (checkPrime64(i))
			return i;

	return 0;
};
