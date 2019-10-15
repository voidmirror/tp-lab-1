#include "task5.h"
#include <iostream>
using namespace std;

int main(){
	char str[]= "Hello_world_my_name_is_Evgeny";
	char dev = '_';
	int N = 0;
	char **result;
	split(&result, &N, str, dev);

	cout << result[1] << endl;
	system("Pause");
}