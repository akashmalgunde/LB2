#include<stdio.h>
#define bool int
#define true 1
#define false 0

int countChar(char *ptr,char ch)
{
    int iCnt = 0;
    int i = 0;

    while(ptr[i] != '\0')
    {
        if(ptr[i] == ch)
            iCnt++;

        i++;
    }

    return iCnt;
}

int len(char *ptr)
{
    int i = 0;

    while(ptr[i] != '\0')
    {
        i++;
    }

    return i;
}

bool compareBoth(char *ptr,char *ptr1)
{
    int i = 0;
    bool bRet = true;

    while(ptr[i] != '\0')
    {
        if(countChar(ptr,ptr[i]) != countChar(ptr1,ptr[i]))
        {
            bRet = false;
            break;
        }
        i++;
    }

    return bRet;
}

bool checkAnagram(char* str1,char *str2)
{
    if(len(str1) == len(str2) && compareBoth(str1,str2))
        return true;

    return false;

}

int main()
{

    char *str1 = "listhven";

    char *str2 = "silent";

    if(checkAnagram(str1,str2))
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}