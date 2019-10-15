//
// Created by fiskirton on 10/1/19.
//

#include <iostream>
#include "task5.h"

#define LEN 10

using namespace std;

int main(){
    char **arr;
    char * str = "123**12";
    int N;
    char ch = '*';
    split(&arr, &N, str, ch);
    for (int i = 0; i < N; ++i) {
        cout << arr[i]<< endl;
        delete arr[i];
    }
    delete arr;
}