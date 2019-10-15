
unsigned long long sumPrime(unsigned int hbound)
{
    bool* arr = new bool[hbound];
    for (int i = 0; i < hbound; i++)
        arr[i] = true;

    for (int i = 2; i * i <= hbound; i++)
    {
        if (arr[i])
            for (int j = i * i; j <= hbound; j += i)
                arr[j] = false;
    }

    unsigned long long result = 0;
    for (int i = 2; i < hbound; i++)
        if (arr[i]) result += i;

    return result;
}

