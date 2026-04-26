#include<stdio.h>

int calLen(int iNo)
{
    int iLen = 0;

    while(iNo != 0)
    {
        iLen++;
        iNo = iNo / 10;
    }

    return iLen;
}

float calAvg(int iNo)
{
    float fAvg = 0;
    int iSum = 0;
    int iLen = 0;

    iLen = calLen(iNo);

    while(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
    }

    fAvg = iSum / iLen;

    //printf("%f is the avg in function\n",fAvg);

    return fAvg;

}

int calSum(int iNo)
{
    int iSum = 0;
    float fAvg = 0;
    int iDigit = 0;
    fAvg = calAvg(iNo);

    //printf("%f is the avg\n",fAvg);

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(fAvg >= iDigit)
            iSum = iSum + iDigit;

        //iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
    }

    return iSum;
}

int main()
{
    printf("%d",calSum(583274));
    return 0;
}