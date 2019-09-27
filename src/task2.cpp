//
// Created by Илья on 025 25.09.19.
//

#include "task2.h"
#include <math.h>
bool checkPrime(unsigned int value){
    bool flag = true;
    for (int i = 2; i < sqrt(value); i += 1) {
        if (value % i == 0) {
            flag = false;
        }
    }
    return flag;
}

unsigned long long nPrime(unsigned n){
    unsigned k = 0;
    unsigned long long i = 1;
    while (k < n){
        i++;
        if (checkPrime(i)) {
            k++;
        }
    }
    return i;
}

unsigned long long nextPrime(unsigned long long value){
    for(unsigned long long i = value + 1; ;i++){
        if(checkPrime(i)){
            return i;
        }
    }
}