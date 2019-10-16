#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "task4.h"

using namespace std;

int main() {
	

	char r[100], k[100];
	
	

	char s[10], m[10];
	gets(m);
	gets(s);
	char *poi = r;
	poi = sum(m, s);
	//s = m[2];
	puts(poi);

}