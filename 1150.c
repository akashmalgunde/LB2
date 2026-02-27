#include<stdio.h>
#define bool int
#define true 1
#define false 0

int sumOfDigit(int iNo)
{
    int iSum = 0;

    while(iNo != 0)
    {
        iSum = iSum + iNo % 10;
        iNo = iNo / 10;
    }

    return iSum;
}

bool checkNiven(int iNo)
{
    bool bRet = false;

    if(iNo % sumOfDigit(iNo) == 0)
        bRet = true;

    return bRet;
}

int main()
{
    int iNo = 0;

    iNo = 18;

    if(checkNiven(iNo))
        printf("Niven\n");
    else
        printf("Not Niven\n");

    return 0;
}