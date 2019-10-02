#include <iostream>
#include "task4.h"
using namespace std;

int main()
{
    char x[] = "99999999999999999999999999999999999";
    char y[] = "434573495470430398982375093450";

    char* result = sum(x, y);
    cout << x << endl;
    cout << "+" << endl;
    cout << y << endl;
    cout << "-------------------------------------------" << endl;
    cout << result << endl;
    return 0;
}