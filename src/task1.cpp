#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max)
{
	int n = 0, c = 0;
	while (c != (max - min +1))
	{
		c = 0;
		n++;
		for (int i = min; i <= max; i++)
		{
			if (n % i == 0)
				c++;
		}	
	}
	return n;
}