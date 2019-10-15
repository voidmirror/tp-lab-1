//
// Created by Оксана on 25.09.2019.
//
#include <iostream>
#include <stdio.h>
#include <vector>
#include "task5.h"
using namespace std;

int main() {
    char **result;
    char buf[] = "i love theater";
    int N = 0;
    split(&result, &N, buf, ' ');
    for (int i = 0; i < N; i++)
        cout << result[i] << "\n";
}
