#include "task5.h"
#include <string.h>
#include <malloc.h>

void split(char ***result, int *N, char *buf, char ch) {
	*N = 1;
	for (int i = 0; i < strlen(buf); i++)
	{
		if (*(buf + i) == ch) *N += 1;
	}
	*result = (char**)malloc(*N * sizeof(char*));
	int i = 0;
	for (int j = 0; j < *N; j++)
	{
		int k = 0;
		while ((*(buf + 1) != 0) && (*(buf + i) != ch))
		{
			k++;
			i++;
		}
		*(*result + j) = (char*)malloc((k + 1) * sizeof(char));

		strncpy(*(*result + j), buf + (i - k), k);
		*(*(*result + j) + k) = 0;
		i++;
	}
}