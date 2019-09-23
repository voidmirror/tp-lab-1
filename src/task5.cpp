#include "task5.h"
#include <malloc.h>
#include <string>

using namespace std;

void split(char ***result, int *N, char *buf, char ch) {
	int len = _msize(buf) / sizeof(buf[0]);
	*N = 1;
	for (int i = 0;i < len;i++)
		if (buf[i] == ch)(*N)++;
	int *siz = new int[*N];
	memset(siz, 0, *N);
	*result = (char**)malloc((*N)*(sizeof(char*)));
	char *sub = (char*)malloc(len * sizeof(char));
	int sublen = 0;
	int num = 0;
	for (int i = 0;i < len;i++) {
		if (buf[i] == ch) {
			char *add = (char*)malloc(sublen * sizeof(char));
			for (int j = 0;j < sublen;j++)add[j] = sub[j];
			(*result)[num] = add;
			num++;
			sublen = 0;
		}
		else {
			sub[sublen] = buf[i];
			sublen++;
		}
	}
	char *add = (char*)malloc(sublen * sizeof(char));
	for (int j = 0;j < sublen;j++)add[j] = sub[j];
	(*result)[num] = add;
	free(sub);
}