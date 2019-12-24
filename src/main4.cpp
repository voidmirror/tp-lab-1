#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "task4.h"

using namespace std;

int main() {
	

	char r[1000], k[1000];
	
	

	char s[1000], m[1000];
	gets(m);
	gets(s);
	char *poi = r;
	poi = sum(m, s);
	//s = m[2];
	puts(poi);

}