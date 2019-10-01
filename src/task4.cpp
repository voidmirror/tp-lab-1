#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include "task4.h"
using namespace std;

char *sum(char *x, char *y) {

	int x_len = strlen(x);
	int y_len = strlen(y);

	char *a = new char[x_len + 1];
	char *b = new char[y_len + 1];

	for (int i = 0; i < x_len; i++) 
		a[i] = x[x_len - i - 1];
	a[x_len] = '\0';

	for (int i = 0; i < y_len; i++) 
		b[i] = y[y_len - i - 1];
	b[y_len] = '\0';

	int res_len = max(x_len, y_len);
	vector<char> res;
	int r = 0;
	
	for (int i = 0; i < res_len; i++) {
		if (i < x_len) {
			r += a[i] - '0';
		}

		if (i < y_len) {
			r += b[i] - '0';
		}

		res.push_back(r % 10);
		r /= 10;
	}

	if (r != 0) res.push_back(r);
	res_len = res.size();


	for (int i = 0; i < res_len/2; i++) 
		swap(res[i], res[res_len - i - 1]);

	char *str = new char[res_len + 1];

	for (int i = 0; i < res_len; i++) 
		str[i] = (char)(res[i] + '0');

	str[res_len] = '\0';
	return str;
}