#include "task1.h"
unsigned long findValue(unsigned int min, unsigned max)
{
	unsigned long ans = max;
	while (1)
	{
		bool flag = true;
		for (unsigned int i = min; i <= max; i++)
		{
			if (ans%i != 0)
			{	
				flag = false;
				break;				
			}
		}
		if (flag)
		{
			return ans;
		}
		else
		{
			ans++;
		}
	}
}