
char * sum(char *x, char *y)
{
    int indX = 0, indY = 0;
    while (x[indX + 1] != '\0')
        indX++;
    while (y[indY + 1] != '\0')
        indY++;

    int size = (indX >= indY) ? indX + 3 : indY + 3;

    char* result = new char[size];
    for (int i = 0; i < size; i++)
        result[i] = '0';

    result[size - 1] = '\0';
    int indResult = size - 2;

    int buffer = 0;
    int temp = 0;
    while (indX >=0 && indY >= 0)
    {
        temp = (x[indX] - '0') + (y[indY] - '0') + buffer;
        buffer = 0;
        if (temp >= 10)
        {
            buffer = 1;
            temp -= 10;
        }

        result[indResult] = '0' + temp;
        indResult--;
        indX--;
        indY--;
    }

    if (indY >= 0)
    {
       while (indY >= 0)
       {
           if (buffer == 0) result[indResult] = y[indY];
           else
           {
               temp = y[indY] - '0' + buffer;
               buffer = 0;
               if (temp >= 10)
               {
                   buffer = 1;
                   temp -= 10;
               }
               result[indResult] = '0' + temp;
           }
           indResult--;
           indY--;
       }
    }
    if (indX >= 0)
    {
        while (indX >= 0)
        {
            if (buffer == 0) result[indResult] = x[indX];
            else
            {
                temp = x[indX] - '0' + buffer;
                buffer = 0;
                if (temp >= 10)
                {
                    buffer = 1;
                    temp -= 10;
                }
                result[indResult] = '0' + temp;
            }
            indResult--;
            indX--;
        }
    }

    if (buffer == 1)
        result[indResult] = '0' + buffer;
    else
    {
        char* p = new char[size - 1];
        int i = 0;
        for (; i < size - 2; i++)
            p[i] = result[i + 1];
        p[i] = '\0';

        return p;
    }

    return result;
}

