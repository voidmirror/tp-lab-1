#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "task2.h"

using namespace std;

int main() {
	int num;

	cout << "1st func (Check Prime):" << endl;
	cout << "Enter num: ";
	cin >> num;
	
	if (checkPrime(num)) {
		cout << "YES!" << endl;
	}
	else {
		cout << "NO!" << endl;
	}

	cout << endl << "2d func (nth Prime)" << endl;
	cout << "Enter num: ";
	cin >> num;
	cout << nPrime(num) << endl;

	cout << endl << "3d func (Next Prime)" << endl;
	cout << "Enter num: ";
	cin >> num;
	cout << nextPrime(num) << endl;
}