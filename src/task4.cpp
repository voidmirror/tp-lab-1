#include "string.h"
#include <vector>

#include "task4.h"

char *sum(const char *firstString, const char *secondString)
{
	std::vector<char> *digits = new std::vector<char>();
	bool overflowFlag = false;
	const char *firstStringIterator = firstString + strlen(firstString) - 1;
	const char *secondStringIterator = secondString + strlen(secondString) - 1;
	while (firstStringIterator >= firstString && secondStringIterator >= secondString)
	{
		char digit = '0';
		digit += (*firstStringIterator - '0');
		digit += (*secondStringIterator - '0');
		digit += overflowFlag ? 1 : 0;

		if (digit > '9')
		{
			digit -= 10;
			overflowFlag = true;
		}
		else
			overflowFlag = false;

		digits->push_back(digit);
		firstStringIterator--;
		secondStringIterator--;
	}
	while (firstStringIterator >= firstString)
	{
		char digit = '0';
		digit += (*firstStringIterator - '0');

		if (digit > '9')
		{
			digit -= 10;
			overflowFlag = true;
		}
		else
			overflowFlag = false;

		digits->push_back(digit);
		firstStringIterator--;
	}
	while (secondStringIterator >= firstString)
	{
		char digit = '0';
		digit += (*secondStringIterator - '0');

		if (digit > '9')
		{
			digit -= 10;
			overflowFlag = true;
		}
		else
			overflowFlag = false;

		digits->push_back(digit);
		secondStringIterator--;
	}
	if (overflowFlag)
		digits->push_back('1');

	std::reverse(digits->begin(), digits->end());

	uint32_t stringLength = digits->size();
	char *string = new char[stringLength + 1];
	for (uint32_t i = 0; i < stringLength; i++)
		string[i] = (*digits)[i];
	string[stringLength] = '\0';

	delete digits;
	return string;
};
