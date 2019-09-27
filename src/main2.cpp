#include <iostream>
#include "task2.h"
using namespace std;

int main() {
	
	unsigned long long first_n;
	cout << "Enter a number to check if it is prime: ";
	cin >> first_n;
	if (checkPrime(first_n)) {
		cout << first_n << " is prime\n";
	}
	else {
		cout << first_n << " is not prime\n";
	}


	unsigned long long sec_n;
	cout << "Enter a number in prime sequence: ";
	cin >> sec_n;
	cout << nPrime(sec_n)<< endl;

	unsigned long long third_n;
	cout << "Enter a value: ";
	cin >> third_n;
	cout << nextPrime(third_n);
	return 0;
}