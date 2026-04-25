#include<stdio.h>
#include<stdbool.h>
int calSquare(int i)
{
    return i * i;
}

int calSum(int iNo)
{
    int iSum = 0;

    while(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
    }

    return iSum;
}

bool checkNeon(int iNo)
{
    bool bRet = false;

    if(iNo == calSum(calSquare(iNo)))
        bRet = true;
    
    return bRet;
}

int main()
{

    if(checkNeon(9))
        printf("Neon number\n");
    else
        printf("Not Neon\n");

    return 0;
}