#include<stdio.h>
#include<stdbool.h>

bool checkPresent(char *str,char ch)
{
    int i = 0;
    bool bRet = false;
    int iCnt = 0;

    while (str[i] != '\0')
    {
        if(str[i] == ch)
            iCnt++;

        i++;
    }

    if(iCnt == 1)
        bRet = true;

    return bRet;   
}

bool checkPangram(char *str)
{
    bool bRet = true;

    char ch = 'a';

    for(int i = 1; i <= 26; i++)
    {
        if(!checkPresent(str,ch))
        {
            bRet = false;
            break;
        }


    }

    return bRet;
}

int main()
{   
    char str[] = "The quick brown fox jumps over the lazy dog";

    if(checkPangram(str))
        printf("Pangram\n");
    else
        printf("Not Pangram\n");
    return 0;
}