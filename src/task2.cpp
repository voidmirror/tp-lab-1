#include <cmath>

bool checkPrime(unsigned int value)
{
   for (unsigned i = 2; i <= std::sqrt(value); i++)
       if (value % i == 0)
           return false;
   return true;
}

unsigned long long nPrime(unsigned n)
{
    unsigned long long current = 2;
    if (n == 2) return 3;

    for (int i = 2; i < n;)
    {
        while (checkPrime(current)) current++;
        while (!checkPrime(current)) current++;
        i++;
    }

    return current;
}

unsigned long long nextPrime(unsigned long long value)
{
    while(!checkPrime(value + 1))
        value++;
    return value + 1;
}
