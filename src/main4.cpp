#include <stdlib.h>
#include "task4.h"
#include <iostream>

int main() {
	char c = '4';
	char x[] = "8000";
	char y[] = "9000";
	char* x_c = x;
	char* y_c = y;

	std::cout << x_c << " + "  << y_c  << " = "<< sum(x_c, y_c);
	return 0;
}