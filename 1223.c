#include<stdio.h>

int calculateDiff(int iNo)
{
    int iDigit = 0;
    int iEven = 0;
    int iOdd = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
            iEven = iEven + iDigit;
        else 
            iOdd = iOdd + iDigit;

        iNo = iNo / 10;
    }

    return iEven - iOdd;
}

int main()
{

    int iNo = 0;

    iNo = 123456;

    printf("%d\n",calculateDiff(iNo));
}