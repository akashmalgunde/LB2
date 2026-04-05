#include<stdio.h>

int countWords(char *cptr)
{
    int iCnt = 0;

    //int i = 0;

    int i = 0;

    while(cptr[i] != '\0')
    {
        if((cptr[i] != ' ') && (i == 0 || cptr[i-1] == ' '))
    {
        iCnt++;
    }
        i++;
    }

        return iCnt;

    }

int main()
{
    char cArr[] = "    I Love Coding";

    printf("%d is count of words in given sentence\n",countWords(cArr));

    return 0;
}