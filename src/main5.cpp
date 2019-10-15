#include <iostream>

#include "task5.h"

#if true
int main()
{
	char **substrings = nullptr;
	int32_t substringCount = 0;
	split(&substrings, &substringCount, "A string to split.", ' ');
	for (int32_t i = 0; i < substringCount; i++)
		std::cout << substrings[i] << std::endl;

	return 0;
};
#endif