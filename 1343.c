#include<stdio.h>

int countDigits(int iNo)
{
    int iLastDigit = 0;
    int iCnt = 0;
    int iDigit = 0;

    iLastDigit = iNo % 10;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit < iLastDigit)
            iCnt++;
    }

    return iCnt;
}

int main()
{
    int iNo = 0;

    iNo = 583274;

    printf("%d is count of digit less than %d\n",countDigits(iNo),iNo % 10);

    return 0;
}