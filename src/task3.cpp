//
// Created by mikhail on 25.09.2019.
//
#include <vector>

#include "task3.h"

using namespace std;
unsigned long long sumPrime(unsigned int hbound){
    vector<int> primes(hbound, 0);
    for(unsigned int i = 2;i < hbound;i++){
        if(!primes[i]){
            for(unsigned int j = i * 2;j < hbound;j += i){
                primes[j] = 1;
            }
        }
    }
    unsigned long long sum = 0;
    for(unsigned int i = 2;i < hbound;i++){
        sum += i * !primes[i];
    }
    return sum;
}