#include <iostream>
#include "task5.h"
using namespace std;

int main() {

	char a[2];
	char sym;
	char buf[10000];
	char** result = NULL;
	int N = 0;


	cout << "Enter the separating symbol: ";
	cin.getline(a, 2);
	if (a[0] == '\0')
		sym = ' ';
	else 
		sym = a[0];

	cout << "Enter the line: ";
	cin.getline(buf, 10000);
	split(&result, &N, buf, sym);

	cout << "N = " << N << endl;

	for (int i = 0; i < N; i++) {
		for (int j = 0; *(*(result + i) + j) != '\0'; j++)
			cout << *(*(result + i) + j);
		cout << endl;
	}

	return 0;
}
