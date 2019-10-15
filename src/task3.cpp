#include "task3.h"
#include "task2.h"
#include <vector>

unsigned long long sumPrime(unsigned int hbound){

	std::vector<bool> prime(hbound + 1, true);
	prime[0] = prime[1] = false;
	for (int i = 2; i*i < hbound; i++){
		if (prime[i]){
			for (int j = i*i; j < hbound; j += i){
				prime[j] = false;
			}
		}
	}
	long long sum = 0;
	for (int i = 2; i < hbound; i++){
		if (prime[i]) {
			sum += i;
		}
	}
	return sum;

}
