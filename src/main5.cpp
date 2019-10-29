#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "task5.h"

using namespace std;

int main() {
	char** stringArr;
	char buf[] = "123,456,789";
	int N;
	char ch = ',';

	//// ***************** test *****************
	//char test[100];
	//cin >> test;
	//cin >> ch;
	//cout << test << " " << "|| symbol: " << ch << endl << endl << "result:" << endl;
	//// ***************** test *****************

	split(&stringArr, &N, buf, ch); // 'buf' --> 'test' for test

	for (int i = 0; i < N; i++) {
		cout << stringArr[i] << endl;
	}

	/*string stroka = buf;
	stroka.erase(0, 4);
	for (int i = 0; i < 3; i++) {
		strom[i] = stroka[i];
	}
	strom[3] = '\0';
	cout << stroka << endl << buf << endl << strom << endl;*/
}