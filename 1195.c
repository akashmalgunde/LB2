#include<stdio.h>

int calculateLength(char *str)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        iCnt++;
    }

    return iCnt;
}

void reverseStr(char *cArr)
{
    int iCnt = 0;
    int i = 0;
    int j = 0;
    char ch = '\0';

    iCnt = calculateLength(cArr);
    j = iCnt - 1;

    for(int k = 1; k <= iCnt / 2; k++,i++,j--)
    {
        ch = cArr[j];
        cArr[j] = cArr[i];
        cArr[i] = ch;
    }
}

int main()
{
    char cArr[25];

    printf("Enter the string\n");
    scanf("%s",cArr);
    printf("%s\n",cArr);

    reverseStr(cArr);

    printf("%s\n",cArr);

    return 0;
}