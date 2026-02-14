#include<stdio.h>

int countDivisor(int iNo)
{
    if(iNo < 0)
    {
        printf("number should be positive\n");
        return -1;
    }
    int iCnt = 0;

    for(int i = 1; i <= iNo / 2; i++)
    {
        if(iNo % i == 0)
        {
            iCnt++;
        }
    }

    return iCnt;
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    int iRet = 0;

    iRet = countDivisor(iNo);

    if(iRet != -1)
        printf("%d is total count of divisor of %d\n",iNo);

    return 0;
}