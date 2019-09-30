#define _CRT_SECURE_NO_WARNINGS

#include "task5.h"
#include <iostream>

int main() {
	char *buf = "123,456,789";
	int N = 0;
	char **result = nullptr;
	split(&result, &N, buf, ',');
	for (int i = 0; i < N; i++)
	{
		puts(*(result + i));
	}
	return 0;
}