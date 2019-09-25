#include <iostream>
#include "task2.h"
using namespace std;
int main(){
	cout << checkPrime(2) << " " << checkPrime(3) << " " << checkPrime(12) << endl;
	cout << nPrime(6) << " " << nPrime(500) << endl;
	cout << nextPrime(1031) << " " << nextPrime(3559) << " " << nextPrime(2) << endl;
}