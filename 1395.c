#include<stdio.h>

int findSmallest(int iNo)
{
    int iMinOdd = 9;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 != 0)
        {
            iMinOdd = iDigit;
        }

        iNo = iNo / 10;
    }

    return iMinOdd;
}

int main()
{
    int iNo = 0;

    iNo = 583274;

    printf("%d is the smallest digit\n",findSmallest(iNo));

    return 0;
}