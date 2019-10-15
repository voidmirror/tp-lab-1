#include "task1.h"
#include <iostream>

using namespace std;
int main() {
	int m = 20;
	unsigned long ans;
	ans = findValue(1, 20);
	cout << "ANS: " << ans << "\n";;
		
	for (int i = 2; i <= m; i++) 
	{
		if (ans % i != 0) 
		{
			std::cout << "ERR-> " << i << "\n";
		}
	}
	
		
	system("pause");
	return 0;
}