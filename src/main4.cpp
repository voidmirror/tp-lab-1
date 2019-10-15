#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include "task4.h"
using namespace std;

int main() {
	char *x = (char*)"123456789";
	char *y = (char*)"000000001";
	char *ans = sum(x, y);
	cout << ans <<endl;
}