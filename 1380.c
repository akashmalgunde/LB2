#include<stdio.h>


int countDigit(int iNo)
{

    int iCnt = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit > 5)
        {
            iCnt++;
            printf("%d ",iDigit);
        }

        iNo = iNo / 10;
    }

    printf("\n");

    return iCnt;
}


int main()
{

    int iNo = 0;

    iNo = 583274;

    printf("%d is count\n",countDigit(iNo));

    return 0;
}