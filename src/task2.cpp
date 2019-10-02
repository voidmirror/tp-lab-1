//
// Created by sodae on 25.09.2019.
//

#include <iostream>
#include <task2.h>

using namespace std;

bool checkPrime(unsigned int value){
    if (value == 1){
        return false;
    }
    if (value % 2 == 0){
        return value == 2;
    }
    unsigned int del = 3;
    while ((del * del <= value) && (value % del != 0)){
        del += 2;
    }
    return (bool)(del * del > value);
}

unsigned long long nPrime(unsigned n){
    if (n == 0){
        return 0;
    }
    unsigned int size = n;
    auto * primes = new unsigned int[n];
    auto * sieve = new unsigned int[size];
    unsigned int last_prime_pointer = 0;
    unsigned int primes_index = 0;
    for (unsigned int i = 0; i < n; ++i) {
        primes[i] = 0;
    }
    while (true){
        for (unsigned int i = 0; i < size; ++i) {
            sieve[i] = i;
        }
        eratosthenes_sieve(sieve, size);
        for (unsigned int k = last_prime_pointer; k < size && primes_index < n ; ++k) {
            if(sieve[k] != 0){
                primes[primes_index] = sieve[k];
                primes_index++;
            }
        }
        if (primes[n - 1] == 0){
            last_prime_pointer = size;
            size *= 2;
            delete[] sieve;
            sieve = new unsigned int[size];
        } else{
            delete[] sieve;
            break;
        }
    }
    return primes[n - 1];
}

unsigned long long nextPrime(unsigned long long value){
    auto size = (unsigned int)(value * 2 );
    auto * sieve = new unsigned int[size];
    for (unsigned int j = 0; j < size; ++j) {
        sieve[j] = j;
    }
    eratosthenes_sieve(sieve, size);
    for (unsigned int i = value; i < size; ++i) {
        if (sieve[i] > value){
            return sieve[i];
        }
    }
    delete[] sieve;
    return 2;
}

void eratosthenes_sieve(unsigned int * array, unsigned int array_size){
    if (array_size > 0){
        array[1] = 0;
    }
    for (int i = 2; i*i < array_size; ++i) {
        if (array[i] != 0) {
            for (unsigned int k = i * i; k < array_size; k += i) {
                array[k] = 0;
            }
        }
    }
}
