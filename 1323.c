#include<stdio.h>

int calEvenSum(int iNo)
{
    int iEvenSum = 0;

    while(iNo != 0)
    {
        if((iNo % 10) % 2 == 0)
            iEvenSum = (iNo % 10) + iEvenSum;

        iNo = iNo / 10;
    }

    return iEvenSum;
}

int calOddSum(int iNo)
{
    int iOddSum = 0;

    while(iNo != 0)
    {
        if((iNo % 10) % 2 != 0)
            iOddSum = iOddSum + (iNo % 10);

        iNo = iNo / 10;
    }
    return iOddSum;
}

int calDiff(int iNo)
{
    int iEvenSum = 0;
    int iOddSum = 0;
    int iDiff = 0;

    iEvenSum = calEvenSum(iNo);

    iOddSum = calOddSum(iNo);

    iDiff = iEvenSum - iOddSum;

    return iDiff;
}

int main()
{
    int iNo = 583274;

    printf("%d is a difference\n",calDiff(iNo));


    return 0;
}