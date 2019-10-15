
void split(char ***result, int *N, char *buf, char ch)
{
    int indBuf = 0;
    int indCh = 0;
    int countStrings = 1;
    int indRes = 0;
    for (int i = 0; buf[i] != '\0'; i++)
        if (buf[i] == ch)
            countStrings++;

    char** res = new char* [countStrings];

    while (buf[indBuf] != '\0')
    {
        while (buf[indBuf] != ch && buf[indBuf] !='\0')
            indBuf++;

        int size = indBuf - indCh + 1;
        char* temp = new char[size];
        for (int i = 0; i < size; i++)
            temp[i] = '0';
        temp[size - 1] = '\0';

        for (int i = 0; temp[i] != '\0'; i++)
            temp[i] = buf[indCh + i];

        if (buf[indBuf] != '\0')
        {
            indBuf++;
            indCh = indBuf;
        }

        res[indRes] = temp;
        indRes++;
    }

    *result = res;
    *N = countStrings;
}
