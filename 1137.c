#include<stdio.h>
#define bool int
#define true 1
#define false 0

int sumDivisor(int iNo)
{
    int iSum = 0;
    for(int i = 1; i <= iNo / 2; i++)
    {
        if(iNo % i == 0)
            iSum = iSum + i;
    }

    return iSum;
}

bool checkPerfect(int iNo)
{
    bool bRet = false;

    if(sumDivisor(iNo) == iNo)
        bRet = true;

    return bRet;
}

int main()
{
    int iNo = 0;
    printf("Enter the number:\n");
    scanf("%d",&iNo);


    if(checkPerfect(iNo))
        printf("Perfect square number\n");
    else
        printf("Not perfect square number\n");

    return 0;
}