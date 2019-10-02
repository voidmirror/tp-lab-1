
unsigned long findValue(unsigned int min,unsigned max)
{

    unsigned x = min;
    unsigned y = min;

    while (y <= max)
        if (x % y == 0)
            y++;
        else
        {
            x++;
            y = min;
        }
    return x;
}

