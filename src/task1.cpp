#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max)
{
	unsigned long ans = max;
	int flag = 0;
	unsigned long count;
	unsigned long res = max - min + 1;
	while (flag == 0)
	{
		count = 0;
		for (int i = min; i <= max; i++)
		{
			if (ans%i == 0)
				count++;
		}
		if (count == res)
		{
			flag = 1;
			return ans;
			break;
		}
		
		ans++;

	}

	
}