#include "task2.h";
#include <iostream>

using namespace std;

int main() {
	unsigned int function1Check;
	cin >> function1Check;
	cout << checkPrime(function1Check) << '\n';
	signed function2Check;
	cin >> function2Check;
	cout << nPrime(function2Check) << '\n';
	unsigned long long function3Check;
	cin >> function3Check;
	cout << nextPrime(function3Check) << '\n';
}