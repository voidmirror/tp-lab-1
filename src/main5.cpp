#include <iostream>
#include "task5.h"
using namespace std;

int main()
{
    int n;
    char buf[] = "hello world from main5 cpp";
    char ch = 'o';
    char*** result;
    split(result, &n, buf, ch);
    for (int i = 0; i < n; i++)
    {
       cout << i + 1 << ") " << (*result)[i] << endl;
    }

    return 0;
}

