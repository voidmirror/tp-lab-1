#define _CRT_SECURE_NO_WARNINGS

#include "task5.h"
#include <iostream>
using namespace std;

void split(char ***result, int *N, char *buf, char ch)
{
	const int len = strlen(buf);
	*N = 1;
	for (int i = 0; i < len; i++)
	{
		if (buf[i] == ch)
		{
			(*N)++;
		}
	}

	*result = (char **)malloc((*N) * sizeof(char*));
	auto temp = (char *)malloc((len + 1) * sizeof(char));


	int count = 1;
	*(*result + 0) = temp;

	for (int i = 0; i < len; i++)
	{
		temp[i] = buf[i];
		if (temp[i] == ch)
		{
			*(temp + i) = '\0';
			*(*result + count) = temp + i + 1;
			count++;
		}
	}
	temp[len] = '\0';
}
