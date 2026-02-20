#include<stdio.h>
#define bool int
#define true 1
#define false 0


bool checkSunny(int iNo)
{
    int iNewNum = 0;
    int iSquare = 1;
    bool bRet = false;

    iNewNum = iNo + 1;
    int i = 2;

    while(iSquare < iNewNum)
    {
        iSquare = i * i;
        i++;
    }

    if(iSquare == iNewNum)
        bRet = true;

    return bRet;
}

int main()
{   
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    if(checkSunny(iNo))
        printf("Sunny number\n");
    else
        printf("Number is not sunny number\n");

    return 0;
}