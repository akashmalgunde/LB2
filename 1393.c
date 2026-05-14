#include<stdio.h>
#include<stdbool.h>


bool checkEquals(char *str1, char *str2)
{
    int i = 0;
    int j = 0;
    bool bRet = true;

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            bRet = false;
            break;
        }

        i++;
        j++;
    }

    return bRet;
}

int main()
{

    if(checkEquals("hello","ello"))
        printf("equal");
    else
        printf("Not equal");

    return 0;
}