    //
// Created by fiskirton on 10/1/19.
//

#include <cstring>
#include <iostream>

using namespace std;


char * sum(char *x, char *y){
    int len_x = strlen(x);
    int len_y = strlen(y);

    unsigned int result_len;
    if (len_x > len_y){
        result_len = len_x + 1;
    } else{
        result_len = len_y + 1;
    }

    auto * result = new char[result_len];
    unsigned int c = 0;
    int x_pointer = len_x - 1;
    int y_pointer = len_y - 1;
    unsigned int a;
    unsigned int b;

    for (unsigned int i = 0; i < result_len; ++i) {
        if (x_pointer < 0){
            a = 0;
        } else{a = x[x_pointer] - '0';}
        if(y_pointer < 0){
            b = 0;
        } else{b = y[y_pointer] - '0';}

        c = c + a + b;
        result[i] = c % 10 + '0';
        c = c / 10;
        if (x_pointer >= 0){
            x_pointer --;
        }
        if (y_pointer >= 0){
            y_pointer --;
        }
    }

    int reverse_result_len = 0;
    if (result[result_len - 1] == '0'){
        reverse_result_len = (int)result_len - 1;
    } else{ reverse_result_len = (int)result_len;}

    auto * reverse_result = new char[reverse_result_len];
    int count = 0;

    for (int j = (int)reverse_result_len - 1; j >= 0; --j) {
        reverse_result[count] = result[j];
        count++;
    }
    reverse_result[reverse_result_len] = '\0';

    delete [] result;
    return reverse_result;
}


