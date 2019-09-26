#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
char* sum(char* a, char* b) {
	int n = max(strlen(a), strlen(b));
	char* c = (char*)malloc(sizeof(char) * (n + 1));
	c[n + 1] = '\0';


	char* b1 = (char*)malloc(sizeof(char) * (n));
	b1[n] = '\0';


	char* a1 = (char*)malloc(sizeof(char) * (n));
	a1[n] = '\0';


	for (int i = 0; i < n; i++)
	{
		a1[i] = '0';
		b1[i] = '0';
	}


	n = strlen(a);
	for (int i = 0; i < n; i++)
	{
		a1[i] = a[n - 1 - i];
	}


	n = strlen(b);
	for (int i = 0; i < n; i++)
	{
		b1[i] = b[n - 1 - i];
	}



	for (int i = 0; i < strlen(c); i++)
		c[i] = '0';


	int i = 0;
	n = max(strlen(a), strlen(b));
	for (i = 0; i < n; i++) {
		int t = a1[i] - '0' + b1[i] - '0' + c[i] - '0';
		c[i] = '0' + (t % 10);
		c[i + 1] = t / 10 + '0';
	}

	n = strlen(c);
	if (c[n - 1] == '0') {
		c[n - 1] = '\0';

	}

	n = strlen(c);
	for (int i = 0; i < n / 2; i++)
	{
		char t = c[i];
		c[i] = c[n - 1 - i];
		c[n - 1 - i] = t;
	}

	return c;

}