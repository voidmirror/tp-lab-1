//
// Created by Оксана on 25.09.2019.
//
#include <iostream>
#include <stdio.h>
#include <vector>
#include "task2.h"
using namespace std;

bool checkPrime(unsigned int value) {
    /*
    bool mas[value + 1];
    for(unsigned int i = 0; i <= value; i++) {
        mas[i] = true;
    }
    mas[1] = false;
    for (unsigned int i = 2; i * i <= value; i++) {
        if (mas[i]) {
            for (unsigned int j = i * i; j <= value; j+=i) {
                mas[j] = false;
            }
        }
    }
    return mas[value]; */

    if(value < 2) return false;
    for(unsigned int i = 2; i * i <= value; i++){
        if(value % i == 0)
            return false;
    }
    return true;
}



unsigned long long nPrime(int n) {
     int k = 0;
    unsigned long long value = 1e6;
    bool mas[value + 1];
    for(unsigned int i = 0; i <= value; i++) {
        mas[i] = true;
    }
    mas[1] = false;
    for (unsigned long long i = 2; i <= value; i++) {
        if (mas[i]) {
            k++;
            if(k == n){
                return i;
            }
            for (unsigned long long j = 2 * i; j <= value; j+=i) {
                mas[j] = false;
            }
        }
    }
}

unsigned long long nextPrime(unsigned long long value) {
    unsigned long long len = 1e6;
    bool mas[len + 1];
    for(unsigned int i = 0; i <= len; i++) {
        mas[i] = true;
    }
    mas[1] = false;
    for (unsigned long long i = 2; i <= len; i++) {
        if (mas[i]) {
            if(i > value){
                return i;
            }
            for (unsigned long long j = 2 * i; j <= len; j+=i) {
                mas[j] = false;
            }
        }
    }
}