#include<stdio.h>

int countVowels(char *cptr)
{
    int i = 0;
    int iCnt = 0;

    while(cptr[i] != '\0')
    {
        if(cptr[i] == 'a' || cptr[i] == 'e'|| cptr[i] == 'i' || cptr[i] == 'o' || cptr[i] == 'u' || cptr[i] == 'A' || cptr[i] == 'E' || cptr[i] == 'I' || cptr[i] == 'O' || cptr[i] == 'U')
        {
            iCnt++;
        }
        i++;
    }

    return iCnt;
}

int main()
{
    char cArr[] = "Programming";

    int iRet = 0;

    iRet = countVowels(cArr);

    printf("%d is count of vowels\n",iRet);

    return 0;
}