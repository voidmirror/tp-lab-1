//
// Created by mikhail on 25.09.2019.
//
#include <vector>
#include <set>

#include "task2.h"

using namespace std;

bool checkPrime(unsigned int value){
    for(unsigned long long i = 2;i * i <= value;i++){
        if(value % i == 0) return 0;
    }
    return 1;
}
unsigned long long nPrime(unsigned int n){
    vector<int> primes(2e6, 0);
    for(unsigned int i = 2;i < 2e6;i++){
        if(!primes[i]){
            n--;
            if(!n) return i;
            for(unsigned int j = i * 2;j < 2e6;j += i){
                primes[j] = 1;
            }
        }
    }
}
unsigned long long nextPrime(unsigned long long value){
    set<int> s;
    vector<int> primes(2e6, 0);
    for(unsigned int i = 2;i < 2e6;i++){
        if(!primes[i]){
            s.insert(i);
            for(unsigned int j = i * 2;j < 2e6;j += i){
                primes[j] = 1;
            }
        }
    }
    return *s.lower_bound(value + 1);
}