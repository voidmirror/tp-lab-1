#include "task5.h"
#include <string.h>

void split(char ***result, int *N, char *buf, char ch){
	*N = 1;

	int i = 0;
	while (*(buf + i) != NULL){
		if (*(buf + i) == ch) (*N)++;
		i++;
	}

	*result = new char*[*N];
	char *current = new char[strlen(buf) + 1];


	**result = current;

	i = 0;
	int j = 1;

	while (i < strlen(buf)){
		*(current + i) = *(buf + i);
		if (*(current + i) == ch){
			*(current + i) = NULL;
			*(*result + (j++)) = current + i + 1;
		}
		i++;
	}


	
	current[strlen(buf)] = NULL;
}