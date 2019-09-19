#define _CRT_SECURE_NO_WARNINGS


#include "task2.h"
#include <stdio.h>

int main()
{
	unsigned long long a, n, b;
	printf("enter numbs: ");
	scanf("%u %u %u", &a, &n, &b);
	if (checkPrime(a)) printf("\n a is prime\n");
	else printf("a isnt prime \n");
	printf("%u prime\n", nPrime(n));
	printf("closest prime %u\n", nextPrime(b));
	return 0;
}