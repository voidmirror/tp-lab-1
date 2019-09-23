#include "task5.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
	string s = "123,456,789";
	int N = 0;
	char **result = nullptr;
	char *buf = (char*)malloc(s.size() * sizeof(char));
	for (int i = 0;i < s.size();i++)buf[i] = s[i];
	split(&result, &N, buf, ',');
	int t = 0;
}