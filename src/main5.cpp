#define _CRT_SECURE_NO_WARNINGS

#include "task5.h"
#include <iostream>

using namespace std;

int main()
{
	char buf[] = "123:qwe:345";
	char** result = nullptr;
	int n;
	split(&result, &n, buf, ':');
	cout << "substrings count: " << n << "\n";
	cout << "substrings:\n";
	for (int i = 0; i < n; i++) {
		cout << result[i] << "\n";
	}
	cin.get();
	return 0;
}