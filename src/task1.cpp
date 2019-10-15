//
// Created by Оксана on 25.09.2019.
//
#include "task1.h"
#include <algorithm>
using namespace std;

unsigned long findValue(unsigned int min,unsigned max) {
    unsigned long lcm = 1;
    for(unsigned long i = min; i <= max; i++) {
        lcm  = i / __gcd(i, lcm) * lcm;
    }
    return lcm;
}