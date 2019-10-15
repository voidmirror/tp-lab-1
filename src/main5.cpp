//
// Created by mikhail on 25.09.2019.
//

#include <iostream>
#include "task5.h"

using namespace std;

int main(){
    int n;
    char *buf = new char[19];
    string s = "hello, hewwo, hello";
    for(int i = 0;i < 19;i++) buf[i] = s[i];
    char **result;
    split(&result, &n, buf, ',');
    for(int i = 0;i < 3;i++){
        cout << result[i] << '\n';
    }
    return 0;
}