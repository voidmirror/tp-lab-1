#include <iostream>
#include "task5.h"
using namespace std;


int main(){
	int N;
	char buf[] = "qwert.qw.ggg.a";
	char **result = NULL;
	split(&result, &N, buf, '.');



	for (int i = 0; i < N; i++){
		cout << result[i] << " ";
	}


	//system("pause");
	return 0;
}