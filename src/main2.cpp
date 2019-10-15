//
// Created by sodae on 25.09.2019.
//

#include <iostream>
#include "task2.h"

using namespace std;

int main(){
    bool result = checkPrime(3559);
    cout << result << endl;

    unsigned long long result2 = nPrime(10000);
    cout << result2 << endl;

    unsigned  long long result3 = nextPrime(2);
    cout << result3 << endl;

}
