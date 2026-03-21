#include<stdio.h>
#include<stdbool.h>

int calculateLen(char *str)
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

void display(char *str)
{
    int iCnt = 0;
    for(int i = 0; i < calculateLen(str); i++)
    {
        iCnt = 1;
        if(!checkAtLeft(str,i))
        {
            for(int j = i + 1; j < calculateLen(str); j++)
            {
                if(str[i] == str[j])
                    iCnt++;
            }
            printf("%c%d",str[i],iCnt);
        }


    }

    printf("\n");
}

int main()
{

    char str[25];

    printf("Enter the string:\n");
    scanf("%s",str);

    display(str);


    return 0;
}