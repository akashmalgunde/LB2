#include<stdio.h>

int maxArrayElement(int *iArr,int iSize)
{
    int iMax = 0;

    iMax = iArr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(iArr[i] > iMax)
            iMax = iArr[i];

    }

    return iMax;
}

int main()
{
    int iArr[] = {10, 45, 7, 23, 89};

    printf("%d is max element in array\n",maxArrayElement(iArr,5));

    return 0;
}