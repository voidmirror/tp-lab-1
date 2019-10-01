#include "task3.h"
#include "task2.h"
#include <iostream>

int main(){
	unsigned n;
	while (true) {
		std::cin >> n;
		if (n == 0) {
			break;
		}
		std::cout << "The sum is " << sumPrime(n) << "\n";
	}
	
	return 0;
}