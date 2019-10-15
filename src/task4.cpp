//
// Created by Илья on 026 26.09.19.
//

#include "task4.h"
#include <algorithm>
#include <string.h>
char *sum(char *x, char *y)
{
    int len1 = strlen(x);
    int len2 = strlen(y);

    if (len1 > len2)
    {
        int tmp = len2;
        len2 = len1;
        len1 = tmp;
        char* cTmp = x;
        x = y;
        y = cTmp;
    }
    // Take an empty string for storing result
    char* result = new char[len2 + 1];

    // Calculate length of both string


    // Reverse both of strings

    int carry = 0;
    for (int i=0; i<len1; i++)
    {
        // Do school mathematics, compute sum of
        // current digits and carry
        int sum = ((x[len1 - i - 1]-'0')+(y[len2 - i - 1]-'0')+carry);
        result[len2 - i] = sum % 10 + '0';

        // Calculate carry for next step
        carry = sum/10;
    }

    // Add remaining digits of larger number
    for (int i=len1; i<len2; i++)
    {
        int sum = ((y[len2 - i - 1]-'0')+carry);
        result[len2 - i] = sum % 10 + '0';
        carry = sum/10;
    }
    result[len2+1] = '\0';
    // Add remaining carry
    if (carry){
        result[0] = carry+'0';
    }
    else
    {
        result++;
    }
    return result;
    // reverse resultant string

}