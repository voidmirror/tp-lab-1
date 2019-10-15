#include <iostream>
#include "task1.h"
using namespace std;

int main() {

	unsigned long min, max;
	cin >> min >> max;

	cout << findValue(min, max);
	return 0;
}