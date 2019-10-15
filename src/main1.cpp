//
// Created by mikhail on 25.09.2019.
//
#include <iostream>
#include "task1.h"

int main(){
    for(int i = 1;i <= 20;i++){
        for(int j = i;j <= 20;j++){
            findValue(i, j);
        }
    }
    return 0;
}