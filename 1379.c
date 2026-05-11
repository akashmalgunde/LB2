#include<stdio.h>

int calAvg(int *iArr,int iSize)
{
    int iSum = 0;

    for(int i = 0; i < iSize; i++)
    {
        iSum = iSum + iArr[i];
    }

    return iSum / iSize;
}

int main()
{

    int iArr[] = {10,20,30,40};

    printf("%d is average\n",calAvg(iArr,4));

    return 0;
}