#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
	char a[] = "111111111111", b[] = "111";
	cout << sum(a,b)<< "\n";

	char c[] = "111", d[] = "111";
	cout << sum(c,d) << "\n";

	char e[] = "9", f[] = "9";
	cout << sum(e,f) << "\n";
}