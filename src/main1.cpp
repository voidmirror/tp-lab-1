// main1.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include "task1.cpp"


using namespace std;

int main(){
	
	unsigned min = 1;
	unsigned max = 20;

	unsigned long m = findValue(min, max);

	cout << m;
	
	//system("pause");
	
	return 0;
}

