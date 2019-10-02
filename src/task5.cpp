//
// Created by fiskirton on 10/1/19.
//

#include <cstring>
#include <iostream>

using namespace std;

void split(char ***result, int *N, char *buf, char ch) {
    int buf_len = strlen(buf);
    int sub_arr_len = 0;
    int sub_arr_num = 0;
    int sub_array_pointer = 0;
    int str_pointer = 0;
    for (int i = 0; i < buf_len; ++i) {
        if (buf[i] != ch && i != buf_len - 1) {
            sub_arr_len++;
            continue;
        } else {
            if (buf[i + 1] != ch && sub_arr_len != 0) {

                sub_arr_num++;
                sub_arr_len = 0;

            }
        }
    }
    cout << sub_arr_num << endl;
    *N = sub_arr_num;
    sub_arr_len = 0;
    auto ** tmp = new char *[sub_arr_num];
    *result = tmp;

    for (int j = 0; j < buf_len; ++j) {
        if (buf[j] == ch || j == buf_len-1) {
            if (j == buf_len-1 && buf[j] != ch){
                sub_arr_len++;
            }
            if(sub_arr_len != 0){
                tmp[sub_array_pointer] = new char [sub_arr_len];
                for (int i = 0; i < sub_arr_len; ++i) {
                    tmp[sub_array_pointer][i] = buf[str_pointer];
                    str_pointer++;
                }
                tmp[sub_array_pointer][sub_arr_len] = '\0';
                sub_array_pointer++;
                sub_arr_len = 0;
                str_pointer++;
            } else{
                str_pointer++;
                continue;
            }
        } else {
            ++sub_arr_len;
        }
    }

    *result = tmp;
}
