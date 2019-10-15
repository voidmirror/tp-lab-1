#include <iostream>
#include "task5.h"

using namespace std;

int main()
{
	int N = 0;
	char **result = nullptr;
	char buf[] = "123,456,789,000";
	split(&result, &N, buf, ',');
	return 0;
}