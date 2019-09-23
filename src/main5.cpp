#include "task5.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
	int N = 0;
	char **result = nullptr;
	char buf[] = "123,456,789";
	split(&result, &N, buf, ',');
	int t = 0;
}