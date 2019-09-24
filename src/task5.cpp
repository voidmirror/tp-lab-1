#include "string.h"
#include <vector>

#include "task5.h"

void split(char ***substringArray, uint32_t *substringArrayLength, const char *string, char separator)
{
	std::vector<char> *currentSubstring = new std::vector<char>();
	std::vector<char *> *substrings = new std::vector<char *>();

	for (const char *stringIterator = string; stringIterator - string <= (int32_t)strlen(string); stringIterator++)
	{
		if ((*stringIterator == separator || *stringIterator == '\0') && currentSubstring->size() > 0)
		{
			uint32_t currentSubstringArrayLength = currentSubstring->size();
			char *currentSubstringArray = new char[currentSubstringArrayLength + 1];
			for (uint32_t i = 0; i < currentSubstringArrayLength; i++)
				currentSubstringArray[i] = (*currentSubstring)[i];
			currentSubstringArray[currentSubstringArrayLength] = '\0';

			currentSubstring->clear();
			substrings->push_back(currentSubstringArray);
		}
		else if (*stringIterator != separator)
			currentSubstring->push_back(*stringIterator);
	}

	*substringArrayLength = substrings->size();
	*substringArray = new char *[*substringArrayLength];
	for (uint32_t i = 0; i < *substringArrayLength; i++)
		(*substringArray)[i] = (*substrings)[i];

	delete currentSubstring;
	delete substrings;
};
