//
// Created by mikhail on 25.09.2019.
//
#include <cstring>
#include <iostream>

#include "task4.h"
using namespace std;
char* sum(char* x, char* y){
    auto reverse = [](char *x, int len){
        int n = len;
        for(int i = 0; i < n / 2;i++) swap(x[i], x[n - i - 1]);
    };
    size_t n = strlen(x), m = strlen(y);
    char* t = new char[max(n, m) + 2];
    int ost = 0;
    for(int i = n - 1, j = m - 1, ind = 0; i >= 0 || j >= 0; i--, j--, ind++){
        int cur = ost;
        if(i >= 0) cur += x[i] - '0';
        if(j >= 0) cur += y[j] - '0';
        t[ind] = '0' + cur % 10;
        ost = cur / 10;
    }
    int len = max(n, m);
    if(ost != 0) t[max(n, m)] = ost + '0', len++;
    if(len == max(n, m)){
        char* w = new char[len + 1];
        for(int i = 0;i < len;i++){
            w[i] = t[i];
        }
        delete[] t;
        reverse(w, len);
        w[len] = '\0';
        return w;
    }
    reverse(t, len);
    t[len] = '\0';
    return t;
}