//
// Created by mikhail on 25.09.2019.
//

#include "task5.h"
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

void split(char ***result, int *N, char *buf, char ch){
    string cur = "";
    int cnt = 0;
    vector<string> s;
    for(int i = 0;i < strlen(buf);i++){
        if(buf[i] != ch){
            cur += buf[i];
        }
        else{
            if(cur.size()) s.push_back(cur);
            cur = "";
        }
    }
    if(cur.size()) s.push_back(cur);
    (*N) = s.size();
    *result = new char*[s.size()];
    for(int  i = 0;i < s.size();i++){
        (*result)[i] = new char[s[i].size() + 1];
        for(int j = 0;j < s[i].size();j++){
            (*result)[i][j] = s[i][j];
        }
        (*result)[i][s[i].size()] = '\0';
    }
}
