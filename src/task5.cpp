#include "task5.h"
#include <string.h>

void split(char ***result, int *N, char *buf, char ch){
	*N = 1;
	
	int i = 0, c = 1;
	while (*(buf + i) != '\0'){
		if (*(buf + i) == ch) (*N)++;
		i++;
	}
	
	*result = new char*[*N*sizeof(char*)];
	char *temp = new char[(strlen(buf) + 1) * sizeof(char)];

	
	*(*result + 0) = temp;

	for (int i = 0; i < strlen(buf); i++){
		*(temp + i) = *(buf+i);
		if (*(temp + i) == ch){
			*(temp + i) = '\0';
			*(*result + c) = temp + i + 1;
			c++;
		}
	}
	temp[strlen(buf)] = '\0';
}