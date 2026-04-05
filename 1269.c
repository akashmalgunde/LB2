#include<stdio.h>
#include<stdbool.h>

int calSquare(int iNo)
{
    return iNo * iNo;
}

int calSum(int iNo)
{
    int iSum = 0;

    while(iNo != 0)
    {
        iSum = iSum + iNo % 10;
        iNo = iNo / 10;
    }

    return iSum;
}

bool checkNeon(int iNo)
{
    bool bRet = false;

    //printf("%d\n",calSum(calSquare(iNo)));

    if(iNo == calSum(calSquare(iNo)))
    {
        bRet = true;
    }
    return bRet;
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    if(checkNeon(iNo))
        printf("Neon number\n");
    else
        printf("Not Neon number\n");

    return 0;
}