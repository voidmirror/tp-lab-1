#include "task5.h"
#include <string.h>
#include <stdio.h>

int main()
{
	char sss[] = "asdf0ghgh0dhhh\0";
	//sss[0] = 0;
	//gets_s(sss, 49);
	char **res = NULL;
	int n;
	char ch = '0';
	split(&res, &n, sss, ch);
	for (int i = 0; i < n; i++)
	{
		printf("%i)  ", i + 1);
		puts(*(res + i));
	}
	return 0;
}