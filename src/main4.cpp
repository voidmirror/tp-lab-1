#include "task4.h"
#include <iostream>
#include <string>
#include <malloc.h>

using namespace std;

int main() {
	char x[] = "123456789";
	char y[] = "1";
	char *z = sum(x, y);
	cout << z << '\n';
}