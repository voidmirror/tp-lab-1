#include <iostream>
#include "task2.h"
using namespace std;

int main() {
	unsigned long long a, b, c;
	cout << "Input number to chech for primary: ";
	cin >> a;
	cout << "Input number to find n-prime : ";
	cin >> b;
	cout << "Input number to find next prime: ";
	cin >> c;
	cout << checkPrime(a) << '\n';
	cout << nPrime(b) << '\n';
	cout << nextPrime(c) << '\n';
}