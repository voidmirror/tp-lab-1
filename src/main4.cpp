#include "task4.h"
#include <iostream>
#include <string>
#include <malloc.h>

using namespace std;

int main() {
	string X, Y;
	cin >> X >> Y;
	char *x = (char*)malloc(X.length() * sizeof(char));
	for (int i = 0;i < X.length();i++)x[i] = X[i];
	char *y = (char*)malloc(Y.length() * sizeof(char));
	for (int i = 0;i < Y.length();i++)y[i] = Y[i];
	int lenX = _msize(x) / sizeof(x[0]);
	int lenY = _msize(y) / sizeof(y[0]);
	char *z = sum(x, y);
	int lenZ = _msize(x) / sizeof(x[0]);
	for (int i = 0;i < lenZ;i++)cout << z[i];
	cout << '\n';
}