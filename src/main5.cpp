#include "task5.h"

/*  */

int main()
{
	setlocale(LC_ALL, "Ru");

	char buf[] = "123,456,789";
	int N = 0;
	char** result = nullptr;
	split(&result, &N, buf, ',');

	cout << result[0] << endl;
}