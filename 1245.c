#include<stdio.h>
#include<stdbool.h>

int calLen(char *cArr)
{
    int i = 0;

    while(cArr[i] != '\0')
    {
        i++;
    }

    return i;
}

bool checkPalindrome(char *cArr)
{
    char cptr[50];
    int j = 0;
    bool bRet = true;

    for(int i = 0; i < calLen(cArr); i++)
    {
        if(cArr[i] != ' ')
        {
            cptr[j++] = cArr[i];
        }
    }

    cptr[j] = '\0';

    int iLen = calLen(cptr);

    for(int iTer = 1,i = 0,j = iLen - 1; iTer <= iLen / 2; iTer++,i++,j--)
    {
        printf("cptr[%d] = %c and cptr[%d] = %c\n",i,cptr[i],j,cptr[j]);

        if(cptr[i] >= 'A' && cptr[i] <= 'Z')
        {
            cptr[i] = cptr[i] + 32;
        }
        else if( cptr[j] >= 'A' && cptr[j] <= 'Z')
            cptr[j] = cptr[j] + 32;
            

        if(cptr[i] != cptr[j])
        {
            bRet = false;     
            break;
        }

    }

    return bRet;
}

int main()
{

    char cArr[50] = "A man a plan a canal Panama";

    if(checkPalindrome(cArr))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}