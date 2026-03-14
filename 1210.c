#include<stdio.h>

int countUpper(char *cptr)
{
    int i = 0;
    int iCnt = 0;

    while(cptr[i] != '\0')
    {
        if(cptr[i] >= 'A' && cptr[i] <= 'Z')
            iCnt++;

        i++;
    }

    return iCnt;
}

int main()
{
    char str[] = "HelloWORLD";
    int iRet = 0;

    iRet = countUpper(str);

    printf("%d\n",iRet);

    return 0;
}