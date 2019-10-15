//
// Created by sodae on 25.09.2019.
//
#include <iostream>

using namespace std;

unsigned long findValue(unsigned int min,unsigned max){
    unsigned value = min;
    unsigned factor = min;

    while (factor <= max)
    {
        if (value % factor == 0) factor++;
        else { value++; factor = min; }
    }
    return value;
}
