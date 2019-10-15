#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"

int Nok(int a, int b)
{
	int nod, nok;
	int a1 = a, b1 = b;
	while (a) {
		int t;
		if (b > a) { t = a; a = b; b = t; }
		a %= b;
	}
	nod = b;
	nok = (a1*b1) / nod;
	return nok;
}

unsigned long findValue(unsigned int min, unsigned max){
	int val = min;
	for (int i = min; i < max-1; i++){
		val = Nok(val, i + 1);
	}
	return val;
}



