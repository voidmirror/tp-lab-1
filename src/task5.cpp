#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include "task5.h"
using namespace std;

void split(char ***result, int *N, char *buf, char ch) {
	int len = strlen(buf);

	for (int i = 0; i < len; i++) {
		if (buf[i] == ch) (*N)++;
	}
	(*N)++;

	*result = new char*[*N];
	char *tmp = new char[len];

	int k = 0,i = 0, j = 0;

	for (; i < len + 1; i++) {
		if (buf[i] != ch && buf[i] != '\0') {
			tmp[k] = buf[i];
			k++;
		}

		if (buf[i] == ch || buf[i] == '\0')
		{
			tmp[k] = '\0';
			*(*result + j) = tmp;
			j++;
			k = 0;
			tmp = new char[len];
		}
		
	}
}