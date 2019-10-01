#include "task4.h"

char* sum(char* x, char* y) {
	int len1 = strlen(x), len2 = strlen(y);
	int len = std::max(len1, len2);
	char* res = (char*)malloc(len + 2);

	std::reverse(x, x+len1); 
	std::reverse(y, y+len2);

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
		std::reverse(res, res + len + 1);
		res[len + 1] = '\0';
	}
	else {
		std::reverse(res, res + len);
		res[len] = '\0';
	}

	std::reverse(x, x + len1);
	std::reverse(y, y + len2);
	
	return res;
}