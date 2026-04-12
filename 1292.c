#include<stdio.h>

int countDivisor(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    int iTemp = 0;

    iTemp = iNo;

    while(iTemp != 0)
    {
        iDigit = iTemp % 10;
        if(iNo % iDigit == 0)
            iCnt++;
        iTemp = iTemp / 10;
    }

    return iCnt;
}

int main()
{

    printf("%d ",countDivisor(1224));

    return 0;
}