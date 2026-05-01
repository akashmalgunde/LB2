#include<stdio.h>

int calLen(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;
    }

    return iCnt;
}

int calSum(int iNo)
{
    int iSum = 0;

    while(iNo != 0)
    {
        iSum = (iNo % 10) + iSum;
        iNo = iNo / 10;
    }

    return iSum;
}

float calvg(int iNo)
{
    return calSum(iNo) / calLen(iNo);
}

int countDigits(int iNo)
{
    float fAvg = 0.0f;
    int iCnt = 0;
    int iDigit = 0;

    fAvg = calvg(iNo);

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == fAvg)
            iCnt++;

        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{

    printf("%d",countDigits(222));

    return 0;
}