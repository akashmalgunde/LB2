#include<stdio.h>

int countVowels(char *cArr)
{
    int i = 0;
    int iCnt = 0;

    while(cArr[i] != '\0')
    {
        if(cArr[i] == 'a' || cArr[i] == 'e' || cArr[i] == 'i' || cArr[i] == 'o' || cArr[i] == 'u' || cArr[i] == 'A' || cArr[i] == 'E' || cArr[i] == 'I' || cArr[i] == 'O' || cArr[i] == 'U')
            iCnt++;

        i++;
    }
    return iCnt;
}

int main()
{
    char cArr[25];

    printf("Enter the string:\n");
    scanf("%s",cArr);

    printf("%d\n",countVowels(cArr));

    return 0;
}