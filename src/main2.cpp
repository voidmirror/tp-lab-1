#include <iostream>
#include "task2.h"

using namespace std;
int main(){
	cout << "Is 199 a prime number? " << checkPrime(199) << endl;
	cout << "Is 250 a prime number? " << checkPrime(250) << endl;
	cout << "The 15th prime number is " << nPrime(15) << endl;
	cout << "The next nearest prime number to 14 is " << nextPrime(14) << endl;
	system("pause");
	return 0;
}