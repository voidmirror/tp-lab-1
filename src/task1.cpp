#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max){
	int i = 1, k;
	while (true){

		for (k = min; k <= max; k++){
			if (i % k != 0) break;
		}
		if (k > max){
			return i;
		}
		i++;
	}
}
