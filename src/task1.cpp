#include "task1.h"
#include <iostream>
using namespace std;

long long gcd(long long  a, long long b) {
	return b ? gcd(b, a % b) : a;
}

unsigned long findValue(unsigned int min, unsigned int max){
	long long answer = min;
	for (long long i = min; i <= max; i++){
		//cout << i << " ";
		answer = i * answer / gcd(i, answer);
		//cout << answer << endl;
	}
	return answer;
}