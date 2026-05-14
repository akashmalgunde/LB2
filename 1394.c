#include<stdio.h>

int findIndex(int *iArr,int iSize)
{
    int iMax = 0;
    int iIndex = 0;

    iMax = iArr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(iArr[i] > iMax)
        {
            iMax = iArr[i];
            iIndex = i;
        }
    }

    return iIndex;
}

int main()
{

    int iArr[] = {12, 45, 7, 89, 23};

    printf("Index of largest element is %d\n",findIndex(iArr,5));

    return 0;
}