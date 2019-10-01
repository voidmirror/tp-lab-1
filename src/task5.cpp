//
// Created by Оксана on 25.09.2019.
//
#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>

#include "task5.h"
using namespace std;
void split(char ***result, int *N, char *buf, char ch) {
    int k = 0;
    while (*(buf + k) != '\0') {
        if (*(buf + k) == ch) {
            (*N)++;
        }
        k++;
    }
    (*N)++;
    *result = new char*[*N];
    char* sub = new char[strlen(buf)];
    k = 0;
    int n = 0;
    for (int i = 0; i <= strlen(buf); i++) {
        if ((buf[i] != ch) && (buf[i] != '\0')) {
            sub[k] = buf[i];
            k++;
        }
        if ((buf[i] == ch) || (buf[i] == '\0')) {
            sub[k] = '\0';
            *(*result + n) = sub;
            k = 0;
            n++;
            sub = new char[strlen(buf)];
        }

    }
}
