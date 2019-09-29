#include "task4.h"

int main() {
	char *x = new char[21]{ "99999999999999999999" };
	char *y = new char[21]{ "1" };
	char *z = sum(x, y);
	std::cout << z;
}