#include <iostream>
#include "task4.h"
using namespace std; 

int main(){
	char num1[] = {"1534684633"};
	char num2[] = {"10000000"};
	//char test = 7 + '3';
	cout << sum(num1, num2) << endl;
	char *mas = sum(num1, num2);
	//cout << << endl;
	system("pause");
}