#include "task5.h"
#include <iostream>

int main() {
	char** arr = new char*[5];
	char** result;
	char buf[] = "123, 222, 333,,34,12jdjdjbbbrybgud";
	int N;
	split(&arr, &N, buf, ',');
	for (int i = 0; i < N; i++) {
		std::cout << "Element " << i << ": [" << arr[i] << "]" << std::endl;
	}
	

	return 0;
}