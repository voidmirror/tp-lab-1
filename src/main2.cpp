#include "task2.h"
#include <iostream>

int main() {
	unsigned n;
	while (true) {
		std::cin >> n;

		if (n == 0) {
			break;
		}

		std::cout << "The prime number is " << nextPrime(n) << std::endl;
		
	}
	system("pause");
	return 0;
}