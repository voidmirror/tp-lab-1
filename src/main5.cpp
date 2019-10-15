#include <cstring>
#include "task5.h"
#include <iostream>
using namespace std;

int main() {
	char** result;
	char* buf = (char*)"123,456,789";
	int N = 0;

	split(&result, &N, buf, ',');
	cout << N << endl;
	cout << result[0] << endl;
	cout << result[1] << endl;
	cout << result[2] << endl;
}