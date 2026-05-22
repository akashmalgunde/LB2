#include<stdio.h>

int calSum(int *iArr,int iSize)
{
    int iSum = 0;
    for(int i = 0; i < iSize; i++)
    {
        iSum = iSum + iArr[i];
    }

    return iSum;
}

int calAvg(int *iArr,int iSize)
{
    int iSum = 0;

    iSum = calSum(iArr,5);

    return iSum / iSize;

}

int main()
{
    int iArr[] = {222,15,12,3,2};

    printf("%d\n",calSum(iArr,5));

    printf("%d is an average\n",calAvg(iArr,5));


    return 0;
}