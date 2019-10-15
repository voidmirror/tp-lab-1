#define _CRT_SECURE_NO_WARNINGS

#include "task5.h"
#include <iostream>

int main()
{
	char buf[] = "123:qwe:345";
	char** result = nullptr;
	int n;
	split(&result, &n, buf, ':');
	std::cout << "substrings count: " << n << "\n";
	std::cout << "substrings:\n";
	for (int i = 0; i < n; i++) {
		std::cout << result[i] << "\n";
	}
	return 0;
}