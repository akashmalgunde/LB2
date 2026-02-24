#include<stdio.h>

int countEvenDigit(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        if(iNo % 2 == 0)
            iCnt++;
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    int iRet = 0;

    iRet = countEvenDigit(iNo);

    printf("%d is count of even digit in given number\n",iRet);

    return 0;
}