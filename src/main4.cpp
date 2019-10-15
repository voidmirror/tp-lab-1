//
// Created by fiskirton on 10/1/19.
//

#include <iostream>
#include "task4.h"

using namespace std;

int main(){

    char * x = "15";
    char * y = "06";
    char * result = sum(x, y);
    cout << result <<endl;
    cout << result[2] << endl;
    delete[] result;
}

