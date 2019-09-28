#include "task4.h"

char *sum(char *x, char *y)
{
	int ind1 = 0;
	int ind2 = 0;
	while (x[ind1] != 0)
	{
		ind1++;
	}
	ind1--;
	while (y[ind2] != 0)
	{
		ind2++;
	}
	ind2--;
	int length = ind1;
	if (ind2 > length) length = ind2;
	char *ans = new char [length + 3];
	ans[length + 2] = 0;
	int size = length + 3;
	length++;
	int flag = 0;
	for (; length > -1; length--)
	{
		if (ind1 == -1 && ind2 == -1)
		{
			ans[length] = flag + '0';
			break;
		}
		if (ind1 == -1)
		{
			ans[length] = ((y[ind2] - '0') + flag) % 10 + '0';
			flag = ((y[ind2] - '0') + flag) / 10;
			ind2--;
			continue;
		}
		if (ind2 == -1)
		{
			ans[length] = ((x[ind1] - '0')  + flag) % 10 + '0';
			flag = ((x[ind1] - '0') + flag) / 10;
			ind1--;
			continue;
		}
		ans[length] = ((x[ind1] - '0') + (y[ind2] - '0') + flag) % 10 + '0';
		flag = ((x[ind1] - '0') + (y[ind2] - '0') + flag) / 10;
		ind2--;
		ind1--;
	}
	if (ans[0] == '0')
	{
		char *new_ans = new char[size-1];
		for (int i = 0; i < size - 1; i++)
		{
			new_ans[i] = ans[i + 1];
		}
		delete ans;
		return new_ans;
	}
	return ans;
}