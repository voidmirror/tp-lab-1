#include "task2.h"
#include "task3.h"

uint64_t sumPrime(uint32_t hBound)
{
	uint64_t result = 0;
	for (uint32_t i = 2; i < hBound; i++)
		if (checkPrime(i))
			result += i;

	return result;
};
