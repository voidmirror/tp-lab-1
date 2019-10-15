#include "task3.h"
#include "task2.h"

unsigned long long sumPrime(unsigned int hbound) {

	unsigned long long sum = 0;
	unsigned long long new_prime = 0;
	while (true) {
		new_prime = nextPrime(new_prime);
		if (new_prime >= hbound) {
			return sum - 1;
		}
		sum += new_prime;
	}
}