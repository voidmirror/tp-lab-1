#include "task4.h"

char* reverse(char* x, int len) {

	char* res = (char*)malloc(len);
	for (int i = 0; i < len; i++) {
		res[i] = x[len - i - 1];
	}
	res[len] = '\0';
	return res;
}
char* sum(char* x, char* y) {
	char* res;
	int len1 = strlen(x), len2 = strlen(y);

	int len = len1;
	if (len1 < len2)
		len = len2;

	res = (char*)malloc(len + 2);

	x = reverse(x, len1);
	y = reverse(y, len2);

	int i = 0;
	int cur = 0;
	while (i < len1 && i < len2) {
		cur += x[i] - '0' + y[i] - '0';
		res[i] = (cur) % 10 + '0';
		cur /= 10;
		i++;
	}
	if (len1 > len2) {
		while (i < len1) {
			cur += x[i] - '0';
			res[i] = (cur) % 10 + '0';
			cur /= 10;
			i++;
		}
	}
	else {
		while (i < len2) {
			cur += y[i] - '0';
			res[i] = (cur) % 10 + '0';
			cur /= 10;
			i++;
		}
	}
	if (cur > 0) {
		res[len] = cur + '0';
		res = reverse(res, len + 1);
	}
	else {
		res = reverse(res, len);
	}

	return res;
}