//
// Created by Илья on 025 25.09.19.
//

#include "task1.h"
unsigned long findValue(unsigned int min,unsigned max){
    int* arr = new int[max - min];
    for(int i = min; i < max; i++){
        arr[i] = i;
    }
    int n = min;
    int flag = 0;
    while(true){
        flag = 0;
        for(int i = min; i < max; i++){
            if (n % i != 0){
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            break;
        }
        n++;
    }
    return n;
}