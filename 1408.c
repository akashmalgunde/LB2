#include<stdio.h>
#include<stdbool.h>

bool checkPerfectSquare(int iNo)
{
    printf("%d \n",iNo);

    bool bRet = false;

    int iSquare = 0;

    int i = 1;

    while(iSquare < iNo)
    {
        iSquare = i * i;
        i++;
    }

    if(iSquare == iNo)
    {
        bRet = true;
        printf("%d\n",bRet);
    }

    return bRet;

}

bool checkSunny(int iNo)
{
    bool bRet = false;

    if(checkPerfectSquare(iNo + 1))
        bRet = true;

    return bRet;
}

int main()
{

    if(checkSunny(9))
        printf("%d is sunny number\n",8);
    else
        printf("%d is not sunny number\n",8);

    return 0;
}