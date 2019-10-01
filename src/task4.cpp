//
// Created by Оксана on 25.09.2019.
//
#include "task4.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

using namespace std;
char * sum(char *x, char *y) {
    int k = strlen(x);
    int l = strlen(y);

    char *w = new char[k + 1];
    char *t = new char[l + 1];
    for(int i = 0;i < k;i++) {
        w[i] = x[i];
    }
    w[k] = '\0';
    for(int i = 0;i < l;i++) {
        t[i] = y[i];
    }
    t[l] = '\0';

    for(int i = 0; i < k/2; i++) {
        swap(w[i],w[k - 1 - i]);
    }

    for(int i = 0; i < l/2; i++) {
        swap(t[i],t[l - 1 - i]);
    }

    vector<char> ans;
    int sum = 0;
    for ( int i = 0; i < max(l, k); i++ ) {
        if (i < k) {
            sum += w[i] - '0';
        }
        if (i < l) {
            sum += t[i] - '0' ;

        }
        ans.push_back((sum) % 10);
        sum = sum / 10;
    }
    if (sum) {
        ans.push_back(sum);
    }
    int len = ans.size();

    for(int i = 0; i < len/2; i++) {
        swap(ans[i],ans[len - 1 - i]);
    }

    char *s = new char[len + 1];
    for (int i = 0; i < len; i++) {
        s[i] = (char)(ans[i] + '0');
    }
    s[len] = '\0';
    return s;


}
