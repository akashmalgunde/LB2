#include<stdio.h>

int calSum(unsigned long int iNo)
{

    int iCnt = 1;
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iCnt % 3 == 0)
        {
            iSum = iSum + iDigit;
        }

        iNo = iNo / 10;
        iCnt++;
    }

    return iSum;

}


int main()
{
    unsigned long int iNo = 15646455651;

    printf("%d ",calSum(iNo));

    return 0;
}