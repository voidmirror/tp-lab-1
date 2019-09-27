//
// Created by Илья on 026 26.09.19.
//
#include <iostream>
#include "task5.h"
int main5()
{
    char *buf="14,88";
    int N=0;
    char **result=nullptr;
    split(&result, &N, buf, ',');
    for(int i = 0; i < N; i++)
    {
        std::cout << result[i] << " ";
    }
}