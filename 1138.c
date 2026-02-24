#include<stdio.h>

int findSecLarger(int *iArr,int iSize)
{
    int iMax = 0;
    int iSecMax = 0;

    iMax = iArr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(iArr[i] > iMax)
        {
            iSecMax = iMax;
            iMax = iArr[i];
        }
        else if(iArr[i] > iSecMax)
            iSecMax = iArr[i];
    }

    return iSecMax;
}

int main()
{

    int iArr[] = {10, 20,18, 5, 8, 25,56,65};

    int iRet = 0;

    iRet = findSecLarger(iArr,8);

    printf("%d",iRet);

    return 0;
}