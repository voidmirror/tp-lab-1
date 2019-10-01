//
// Created by Оксана on 25.09.2019.
//
#include <iostream>
#include <stdio.h>
#include <vector>
#include "task4.h"
using namespace std;
int main() {
    /*unsigned long long n;
    cin >> n;
    cout << nextPrime(n);*/
    char* s = (char*)"127800279347";
    char* s1 = (char*)"79365";
    char* s2 = sum(s,s1);
    cout << s2;
}