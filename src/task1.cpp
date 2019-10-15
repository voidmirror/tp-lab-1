#include "task1.h"

unsigned long NOD(unsigned int a, unsigned int b)
{
	while (a*b != 0)
	{
		if (a > b) a = a % b;
		else b = b % a;
	}
	return a + b;
}

unsigned long findValue(unsigned int min, unsigned max)
{
	unsigned long del = (min*(min + 1)) / NOD(min, min + 1);
	for (int i = min + 2; i <= max; i++)
	{
		del = (del*i) / NOD(del, i);
	}
	return del;
}

