#define _CRT_SECURE_NO_WARNINGS

#include "task5.h"
#include<malloc.h>
#include<string.h>

void split(char ***result, int *N, char *buf, char ch)
{
	*N = 1;
	int len = strlen(buf);

	for (int i = 0; i < len; i++){ //подсчет количества подстрок
		if (*(buf + i) == ch) 
			*N +=1; 
	}

	*result = (char**)malloc(*N * sizeof(char*));
	int i = 0;

	for (int j = 0; j < *N; j++){
		int lenstr = 0;

		while ((*(buf + 1) != 0) && (*(buf + i) != ch)){	
			i++;
			lenstr++;
		}

		*(*result + j) = (char*)malloc((lenstr + 1) * sizeof(char));

		strncpy(*(*result + j), buf + (i - lenstr), lenstr);
		*(*(*result + j) + lenstr) = 0;
		i++;
	}
}