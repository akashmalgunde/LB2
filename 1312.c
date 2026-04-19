#include<stdio.h>

void displaySum(int iNo)
{
    //int calSum(int iNo)
    int iOddSum = 0;
    int iEvenSum = 0;

    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 != 0)
            iOddSum = iOddSum + iDigit;
        else
            iEvenSum = iEvenSum + iDigit;

        iNo = iNo / 10;
    }

    //return iRet;

    printf("%d is odd sum\n",iOddSum);
    printf("%d is even sum\n",iEvenSum);

}

int calSum(int iNo)
{
    int iRet = 0;

    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 != 0)
            iRet = iRet + iDigit;

        iNo = iNo / 10;
    }

    return iRet;
}

int main()
{
    int iNo = 664023;

    printf("%d",calSum(iNo));

    printf("\nCalling display sum\n");

    displaySum(iNo);

    return 0;
}