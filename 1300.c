#include<stdio.h>
#include<stdbool.h>

bool checkPrime(int iNo)
{
    bool bRet = true;

    for(int i = 2; i <= iNo /2; i++)
    {
        if(iNo % i == 0)
        {
            bRet = false;
            break;
        }
    }

    return bRet;
}

int calSum(int iNo)
{
    int iSum = 0;

    while(iNo != 0)
    {
        if(checkPrime(iNo % 10) && (iNo % 10) != 1)
            iSum = iSum + (iNo % 10);
            
        iNo = iNo / 10;
    }

    return iSum;
}

int main()
{

    printf("%d is sum\n",calSum(1234));

    return 0;
}