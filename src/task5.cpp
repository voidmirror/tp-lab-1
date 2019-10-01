#include "task5.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int count_seps(char* buf, char ch) {
	int cnt = 0;
	int i = 0;
	for (i = 0; buf[i] != '\0'; i++) {
		if (buf[i] == ch)
			cnt++;
	}
	if (buf[i - 1] != ch) cnt++;
	return cnt;
}
void split(char*** result, int* N, char* buf, char ch) {
	*N = count_seps(buf, ch);

	int cnt_str = 0;
	int i = 0;
	int cur_ind = 0;
	int len = strlen(buf);

	char* cur = (char*)malloc(len);
	*result = (char**)malloc(*N);

	while (buf[i] != '\0') {
		if (buf[i] == ch) {
			cur[cur_ind] = '\0';
			*(*result + cnt_str) = cur;
			cur_ind = 0;
			cur = (char*)malloc(len);
			cnt_str++;
		}
		else {
			cur[cur_ind] = buf[i];
			cur_ind++;
		}
		i++;
	}
	if (cur_ind > 0) {
		cur[cur_ind] = '\0';
		*(*result + cnt_str) = cur;
	}
}