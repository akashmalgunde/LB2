#include<stdio.h>
#include<stdbool.h>
int calculateLength(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    return i;
}

bool checkAtLeft(char *str,int iPos)
{
    bool bRet = false;

    for(int i = 0; i < iPos; i++)
    {
        if(str[i] == str[iPos])
        {
            bRet = true;
            break;
        }
    }

    return bRet;
}

char findNonRep(char *str)
{
    char ch = '\0';

    int iRet = 0;
    int j = 0;
    int i = 0;

    iRet = calculateLength(str);

    for(i = 0; i < iRet; i++)
    {
       if(!checkAtLeft(str,i))

        {
            for(j = i +1; j <iRet; j++)
            {
                if(str[i] == str[j])
                {
                    break;
                }
            }
        }
        if(j == iRet)
        {
            ch = str[i];
            break;
        }



    }

    return ch;
}


int main()
{
    char cArr[25];

    printf("Enter the string :\n");
    scanf("%s",cArr);

    printf("Entered string is: %s\n",cArr);

    if(findNonRep(cArr) != '\0')
        printf("%c\n",findNonRep(cArr));
    else
        printf("No char is there\n");

    return 0;
}