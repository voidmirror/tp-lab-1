#include "task5.h"
#include <malloc.h>

void split(char ***result, int *N, char *buf, char ch)
{
	*N = 0;
	int ind = 0;
	for (; buf[ind] != 0; ind++)
	{
		if (buf[ind] != ch)
		{
			(*N)++;
			while (buf[ind] != ch && buf[ind] != 0)
			{
				ind++;
			}
			if (buf[ind] == 0)
			{
				ind--;
			}
		}
	}
	ind = 0;
	int counter = 0;
	*result = (char**)malloc((*N)*(sizeof(char*)));
	while (buf[ind] != 0)
	{
		if (buf[ind] == ch)
		{
			ind++;
			continue;
		}
		int size = 1;
		while (buf[ind + size] != 0 && buf[ind + size] != ch) size++;
		char *current;
		current = (char*)malloc((size + 1)*(sizeof(char)));
		for (int i = 0; i < size; i++)
		{
			current[i] = buf[ind + i];
		}
		current[size] = 0;
		(*result)[counter] = current;
		counter++;
		ind += size;
	}
}