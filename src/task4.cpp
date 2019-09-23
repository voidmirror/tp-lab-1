#include "task4.h"
#include <malloc.h>
#include <algorithm>
#include <string.h>

using namespace std;

char * sum(char *x, char *y) {
	int lenX = strlen(x);
	int lenY = strlen(y);
	int lenRes = max(lenX, lenY) + 1;
	char *res = (char*)malloc((lenRes+1) * sizeof(char));
	for (int i = 0;i < lenRes;i++)res[i] = '0';
	for (int posRes=lenRes-1,posX = lenX - 1;posX>=0;posRes--,posX--) {
		res[posRes] = res[posRes] - '0' + x[posX];
	}
	for (int posRes = lenRes - 1, posY = lenY - 1;posY>=0;posRes--, posY--) {
		res[posRes] = res[posRes] - '0' + y[posY];
	}
	for (int posRes = lenRes - 1;posRes>=0;posRes--) {
		if (res[posRes] > '9') {
			res[posRes] -= 10;
			res[posRes - 1]++;
		}
	}
	int leadingZeros = 0;
	for (int posRes = 0;posRes < lenRes && res[posRes] == '0';leadingZeros++, posRes++);
	int lenAns = lenRes - leadingZeros;
	if (lenAns == 0)lenAns = 1;
	char *ans = (char*)malloc((lenAns+1) * sizeof(char));
	for (int posAns = lenAns - 1, posRes = lenRes - 1;posAns>=0 && posRes>=0;posAns--, posRes--) {
		ans[posAns] = res[posRes];
	}
	ans[lenAns] = 0;
	free(res);
	return ans;
}