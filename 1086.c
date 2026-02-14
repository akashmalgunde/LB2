#include<stdio.h>

int calculatesum(int *iArr,int iSize)
{
    int iSum = 0;

    for(int i = 0; i < iSize; i++)
    {
        iSum = iSum + iArr[i];
    }

    return iSum;
}


int main()
{
    int iArr[] = {5641,15,12,120,1023};

    printf("%d",calculatesum(iArr,5));

    return 0;
}