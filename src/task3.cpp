//
// Created by Оксана on 25.09.2019.
//
#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>

#include "task3.h"
using namespace std;
unsigned long long sumPrime(unsigned int hbound) {
    bool mas[hbound];
    for(unsigned int i = 0; i < hbound; i++) {
        mas[i] = true;
    }
    mas[1] = false;
    unsigned long long sum = 0;
    for (unsigned int i = 2; i < hbound; i++) {
        if (mas[i]) {
            sum += i;
            for (unsigned int j = 2 * i; j <= hbound; j+=i) {
                mas[j] = false;
            }
        }
    }
    return sum;
}
