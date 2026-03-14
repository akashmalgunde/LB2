#include<stdio.h>

int findMin(int *iArr,int iSize)
{
    int iMin = 0;

    iMin = iArr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(iMin > iArr[i])
            iMin = iArr[i];
    }

    return iMin;
}

int main()
{
    int iArr[] = {7, 2, 9, 4, 1};

    printf("%d",findMin(iArr,5));

    return 0;
}