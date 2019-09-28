#include <iostream>
#include "task2.h"

using namespace std;

int main()
{
	cout << "Is 17 prime? ";
	checkPrime(17) ? cout << "Yes\n" : cout << "No\n";
	cout << "Is 18 prime? ";
	checkPrime(18) ? cout << "Yes\n" : cout << "No\n";
	cout << "3rd prime is " << nPrime(3) << "\n";
	cout << "First prime after 21 " << nextPrime(21) << "\n";
	return 0;
}