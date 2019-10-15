#include "task4.h"
#include <string.h>
#include <malloc.h>
char * sum(char *x, char *y)
{
	int lx = strlen(x);
	int ly = strlen(y);
	int lsum = 1 + (lx > ly) ? lx : ly;
	char *sum = (char*)malloc((lsum + 1) * sizeof(char));
	int ost = 0;
	int i = 1;
	for (i; i <= lsum + 1 ; i++)
	{
		if (i <= lx)
			ost += (*(x + (lx - i)) - '0');
		if (i <= ly)
			ost += (*(y + (ly - i)) - '0');
		*(sum + lsum + 1 - i ) = ost % 10 + '0';
		ost = ost / 10;
	}
	*(sum + lsum + 1) = 0;
	if (*(sum) == '0')
	{
		for (i = 0; i <= lsum; i++)
		{
			*(sum + i) = *(sum + i + 1);
		}
	}
	return sum;
}