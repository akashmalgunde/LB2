#include<stdio.h>

int calculateAvg(int *iArr,int iSize)
{
    int iSum = 0;

    for(int i = 0; i < iSize; i++)
        iSum = iSum + iArr[i];
    
    return iSum / iSize;
}

int main()
{
    int iArr[] = {4, 6, 8, 2};

    printf("%d",calculateAvg(iArr,4));

    return 0;
}