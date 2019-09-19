#include "task4.h"
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "12345678\0";
	char s2[] = "123\0";
	//s1[0] = 0;
	//s2[0] = 0;
	//printf("s1 : ");
	//gets_s(s1, 29);
	//printf("s2 : ");
	//gets_s(s2, 29);
	char *s3 = NULL;
	s3 = sum(s1, s2);
	printf("sum: ");
	puts(s3);
	return 0;
}