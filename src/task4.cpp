#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <string.h>
#include <math.h>
#include <algorithm>

char * sum(char *x, char *y)
{	
	int length, dif, s;
	length = fmax(strlen(x), strlen(y));
	dif = strlen(x) - strlen(y);
	dif = abs(dif);
	char *n1 = new char[length];
	char *n2 = new char[length];
	char *sum = new char[length + 1];
	for (int i = 0; i < length + 1; i++)
		sum[i] = '0';
	sum[length + 1] = 0;
	if (strlen(x) >= strlen(y))
	{
		strcpy(n1, x);
		for (int i = 0; i < dif; i++)
			n2[i] = '0';
		for (int i = dif; i < length; i++)
			n2[i] = y[i - dif];
		n2[length] = 0;
	}
	else
	{
		strcpy(n1, y);
		for (int i = 0; i < dif; i++)
			n2[i] = '0';
		for (int i = dif; i < length; i++)
			n2[i] = x[i - dif];
		n2[length] = 0;
	}
	for (int i = length; i > 0; i--)
	{
		s = (sum[i] - 48) + (n1[i - 1] - 48) + (n2[i - 1] - 48);
		if (s <= 9)
			sum[i] = s + 48;
		else
		{
			sum[i] = s + 38;
			sum[i - 1] = sum[i - 1] + 1;
		}
	}
	if (sum[0] == '0')
	{
		for (int i = 0; i < length; i++)
		{
			sum[i] = sum[i + 1];
		}
		sum[length] = 0;
	}
	return sum;
}