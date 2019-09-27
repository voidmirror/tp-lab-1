#include <iostream>
#include "task2.h"
using namespace std;


int main(){

	unsigned first = 19;
	unsigned second = 6;
	unsigned third = 176;
	checkPrime(first) ? cout << "Prime\n" : cout << "Not prime\n";

	cout << nPrime(second) << "\n";

	cout << nextPrime(third) << "\n";

	//system("pause");
	return 0;
}