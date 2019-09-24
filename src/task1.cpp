#include <map>

#include "task1.h"

uint32_t findValue(uint32_t min, uint32_t max)
{
	std::map<uint32_t, uint32_t> *globalMultipliers = new std::map<uint32_t, uint32_t>();
	std::map<uint32_t, uint32_t> *multipliers = new std::map<uint32_t, uint32_t>();

	for (uint32_t i = min; i <= max; i++)
	{
		uint32_t j = i;
		uint32_t k = 2;
		while (j > 1)
		{
			if (j % k == 0)
			{
				if (multipliers->find(k) == multipliers->end())
					(*multipliers)[k] = 1;
				else
					(*multipliers)[k]++;
				j /= k;
				k = 2;
			}
			else
				k++;
		}

		for (std::map<uint32_t, uint32_t>::iterator iterator = multipliers->begin(); iterator != multipliers->end(); iterator++)
			if (globalMultipliers->find(iterator->first) == globalMultipliers->end()
				|| (*globalMultipliers)[iterator->first] < (*multipliers)[iterator->first])
				(*globalMultipliers)[iterator->first] = (*multipliers)[iterator->first];
		multipliers->clear();
	}

	uint32_t valueToReturn = 1;
	for (std::map<uint32_t, uint32_t>::iterator iterator = globalMultipliers->begin(); iterator != globalMultipliers->end(); iterator++)
		for (uint32_t i = 0; i < iterator->second; i++)
			valueToReturn *= iterator->first;

	delete globalMultipliers;
	delete multipliers;
	return valueToReturn;
};
