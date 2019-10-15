#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <algorithm>
#include <iostream>
using namespace std; 
void split(char*** result, int* N, char* buf, char ch) {
	char* tmp = (char*)malloc(sizeof(char) * 100);
	char** array = (char**)malloc(sizeof(char) *100 * 100);
	for (int i = 0; i < 100; i++) {
		array[i] = (tmp + i * 100);
	}
	int n = strlen(buf);
	int count = 0;
	int j = 0;
	for (int i = 0; i <= n; i++) {
		count++;
		if ((i > 0 && buf[i] == '\0' && buf[i-1] != ch)|| buf[i] == ch) {
			{
				for (int k = 0; k < count-1; k++) {
					array[(*N)][k] = buf[k + j];
				}
				array[*N][count-1] = '\0';
				j = i + 1;
				count = 0;
			}
			(*N)++;
		}
	}
	*result = array;
}
