//
// Created by mikhail on 25.09.2019.
//
#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max){
    auto getLcm = [](unsigned long x, unsigned long y)->unsigned long{
        return x / std::__gcd(x, y) * y;
    };
    unsigned  long lastLcm = 1;
    for(unsigned int i = min;i <= max;i++){
        lastLcm = getLcm(lastLcm, i);
    }
    return lastLcm;
}