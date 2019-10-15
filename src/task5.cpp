//
// Created by Илья on 026 26.09.19.
//

#include "task5.h"
#include <string.h>
#include <iostream>

void split(char ***result, int *N, char *buf, char ch)
{
    int n = strlen(buf);
    *N = 0;
    char* word = new char[1];
    int currentChar = 0;
    for(int i = 0; i < n; i++)
    {
        if(buf[i] == ch)  // if a separator is encountered
        {
            if(currentChar != 0)  // if not an empty string
            {
                char* tmp = new char[currentChar+1];
                strcpy(tmp, word);
                tmp[currentChar] = '\0';
                if (*result == NULL)
                    *result = new char*[1];
                (*result)[*N] = new char[currentChar+1];
                strcpy((*result)[*N], tmp);
                *N += 1;
                currentChar = 0;
                word = new char[1];
                continue;
            }
        }
        if(currentChar == 0)
        {
            word[currentChar++] = buf[i];
        }
        else
        {
            char* wordNew = new char[currentChar + 1];
            strcpy(wordNew, word);
            char* tmp = word;
            word = wordNew;
            word[currentChar++] = buf[i];
        }
    }
    if(currentChar != 0)  // if not an empty string
    {
        char* tmp = new char[currentChar+1];
        strcpy(tmp, word);
        tmp[currentChar] = '\0';
        if (*result == NULL)
            *result = new char*[1];
        (*result)[*N] = new char[currentChar+1];
        strcpy((*result)[*N], tmp);
        *N += 1;
        currentChar = 0;
        word = new char[1];
    }

}