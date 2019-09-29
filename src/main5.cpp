#include "task5.h"
#include <iostream>
using namespace std;

void split(char ***result, int *N, char *buf, char ch)
{
	int i = 0, c = 0, j = 0, k = 0, len;
	while (*(buf + i) != 0)
	{
		if (*(buf + i) == ch)
			c++;
		i++;
	}

	*N = c + 1;

	*result = new char*[c+1];
	char *s = new char[strlen(buf)];

	i = 0;
	j = 0;
	k = 0;
	len = strlen(buf);
	while (len >= 0)
	{
		if ((buf[k] != ch) && (buf[k] != 0))
		{
			*(s + j) = buf[k];
			j++;
		}
		if ((buf[k] == ch) || (buf[k] == 0))
		{
			*(s + j) = 0;
			j = 0;
			*(*result + i) = s;
			i++;
			s = new char[strlen(buf)];
		}
		k++;
		len--;
	}

}

int main()
{
	char **result;
	char buf[] = "a-ab-abc-abcd-abc-ab-a";
	int N;

	split(&result, &N, buf, '-');
	
	for (int i = 0; i < N; i++)
		cout << result[i] << "\n";
}