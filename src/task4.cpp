#define _CRT_SECURE_NO_WARNINGS

#include "task4.h"
#include <iostream>
using namespace std;

char * sum(char *x, char *y)
{
	int remainder = 0, len1, len2, len;
	len1 = strlen(x); //length of the first number
	len2 = strlen(y); //length of the second number

	if (len1 > len2)
	{
		len = len1;
	}
	else
	{
		len = len2;
	}

	char *result = new char[len + 2]; //dynamically allocate an array for result
	result[len + 1] = '\0';

	while (true)
	{
		int sum = 0;
		len1--;
		len2--;
		if (len == 0) {
			result[len] = (char)(remainder + 48); //48 - ascii code of "0"
			break;
		}
		if (len1 >= 0 && len2 >= 0)
		{
			sum = *(x + len1) - 48 + *(y + len2) - 48 + remainder;
		}
		else if (len1 >= 0)
		{
			sum = *(x + len1) - 48 + remainder;
		}
		else
		{
			sum = *(x + len2) - 48 + remainder;
		}
		if (sum > 9)
		{
			remainder = 1;
			sum = sum % 10;
		}
		else
		{
			remainder = 0;
		}
		result[len] = (char)(sum + 48);
		len--;

	}
	if (result[0] == '0')
	{
		result++;
	}
	return result;
}
