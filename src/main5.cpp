#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include "task5.h"
using namespace std;

int main() {
	char *buf = (char*)"123,456,789";
	int N = 0;
	char **result = nullptr;
	split(&result, &N, buf, ',');
	cout << result[1] <<endl;
}