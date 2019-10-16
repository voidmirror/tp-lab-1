#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "task1.h"

using namespace std;

int main() {
	unsigned int max, min;
	cin >> min >> max;
	cout << findValue(min, max) << endl;
}