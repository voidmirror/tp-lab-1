//
// Created by Илья on 025 25.09.19.
//

#include "task3.h"
#include <math.h>
unsigned long long sumPrime(unsigned int hbound){
    unsigned long long sum = 0;
    if (hbound > 2)
        sum += 2;
    for(unsigned int i = 3; i < hbound; i += 2){
        bool flag = true;
        for (int j = 3; j < sqrt(i) + 1; j += 2) {
            if (i % j == 0) {
                flag = false;
            }
        }
        if (flag){
            sum += i;
        }
    }
    return sum;
}