#include<stdio.h>

void displayCount(char * str)
{
    int i = 0;
    int iVCnt = 0;
    int iCCnt = 0;

    while(str[i] != '\0')
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            iVCnt++;
        else
            iCCnt++;

        i++;
    }

    printf("%d is vowel count\n",iVCnt);
    printf("%d is consonant count\n",iCCnt);
}

int main()
{
    char *str = "Programming";

    displayCount(str);

    return 0;
}