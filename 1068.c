#include<stdio.h>

int countUpper(char *cptr)
{
    int i = 0;
    int iCnt = 0;
    while(cptr[i] != '\0')
    {
        if(cptr[i] >= 'A' && cptr[i] <= 'Z')
        {
            iCnt++;
        }
        i++;
    }

    return iCnt;
}

int main()
{

    char ch[] = "HeLLo";

    int iCnt = 0;

    iCnt = countUpper(ch);

    printf("%d is count of upper case letter\n",iCnt);

    return 0;
}