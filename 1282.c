#include<stdio.h>
#include<stdbool.h>

int sum(int iNo)
{
    int iSum = 0;

    while(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
    }

    return iSum;
}

int product(int iNo)
{
    int iProduct = 1;

    while(iNo != 0)
    {
        iProduct = iProduct * (iNo % 10);
        iNo = iNo / 10;
    }

    return iProduct;
}

bool checkSpy(int iNo)
{
    bool bRet = false;

    if(sum(iNo) == product(iNo))
        bRet = true;

    return bRet;
}

int main()
{

    int iNo = 1124;

    if (checkSpy(iNo))
    {
        /* code */
        printf("spy");

    }
    else
        printf("not spy");
    

    return 0;
}