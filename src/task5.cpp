#include "task5.h"
#include <string.h>

#include <iostream>
using namespace std;

/*void split(char ***result, int *N, char *buf, char ch)
{
	int i = 0, c = 0, j = 0, k =0;
	while (*(buf + i) != 0)
	{
		if (*(buf + i) == ch)
			c++;
		i++;
	}
	*N = c+1;

	*result = new char*[c+1];
	char *s = new char[strlen(buf)];

	while (j < strlen(buf))
	{
		if (buf[j] != ch)
		{
			*(s + k) = buf[j];
			k++;
		}
		else
		{
			*(s + k) = 0;
			*(*result + i) = s;
			i++;
			k = 0;
			*(s + 0) = 0;
		}
		j++;
	}
	
}*/