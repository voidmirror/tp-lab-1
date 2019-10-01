#include <iostream>
#include <string.h>
#include "task5.h"
using namespace std;


int main() {
	char *buf = (char*)"one*two*three";
	int N = 0;
	char **result = nullptr;
	split(&result, &N, buf, '*');
	cout << result[2] << endl;
	return 0;
}