#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include "task5.h"

using namespace std;

void split(char ***result, int *N, char *buf, char ch) {
	char* posPoint;
	int pos, start;
	*N = 0;

	string str = buf;

	// count number of separators
	int _counterSeparators = 0;
	for (int i = 0; i < strlen(buf); i++) {
		if (buf[i] == ch) {
			_counterSeparators++;
		}
	}

	// malloc result
	*result = (char**)malloc(sizeof(char*)*(_counterSeparators + 1));
	
	// split cycle (without last string)
	pos = str.find(ch);
	while (pos > 0) {
		(*result)[*N] = (char*)malloc(sizeof(char)*(pos + 1));
		for (int i = 0; i < pos; i++) {
			(*result)[*N][i] = str[i];
		}
		(*result)[*N][pos] = '\0';
		str.erase(0, pos + 1);
		
		pos = str.find(ch);
		(*N)++;
	}

	// last string
	int len = str.length();
	(*result)[*N] = (char*)malloc(sizeof(char)*(len + 1));
	for (int i = 0; i < len; i++) {
		(*result)[*N][i] = str[i];
	}
	(*result)[*N][len] = '\0';
	(*N)++;

	//*result[*N] = (char*)malloc(sizeof(char)* (strlen(buf) + 1));
	//strcpy(*result[*N], buf);
}