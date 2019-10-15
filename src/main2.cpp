#include <iostream>
#include <string>
#include "task2.h"
using namespace std;

int main()
{
    string result = checkPrime(19573) ? "true" : "false";
    cout << "Is 19573 prime: " << result << endl;
    cout << "133 prime number in a row: " << nPrime(133) << endl;
    cout << "Next prime after 19573: " << nextPrime(19573) << endl;
    return 0;
}

