#include "task4.h"
#include <string.h>
#include <malloc.h>
char * sum(char *x, char *y)
{
	int len_x = strlen(x);
	int len_y = strlen(y);
	int len = 1 + (len_x > len_y) ? len_x : len_y;
	char *sum = (char*)malloc((len + 1) * sizeof(char));
	int dif = 0;
	int i = 1;
	for (i; i <= len + 1; i++)
	{
		if (i <= len_x)
			dif += (*(x + (len_x - i)) - '0');
		if (i <= len_y)
			dif += (*(y + (len_y - i)) - '0');
		*(sum + len + 1 - i) = dif % 10 + '0';
		dif = dif / 10;
	}
	*(sum + len + 1) = 0;
	if (*(sum) == '0')
	{
		for (i = 0; i <= len; i++)
		{
			*(sum + i) = *(sum + i + 1);
		}
	}
	return sum;
}