#include<stdio.h>

int findSecLarger(int *iArr,int iSize)
{
    int iMax = 0;
    int iSecLarge = 0;

    iMax = iArr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(iArr[i] > iMax)
        {
            iSecLarge = iMax;
            iMax = iArr[i];
        }
        else if(iSecLarge < iArr[i] && iMax > iArr[i])
            iSecLarge = iArr[i];

        
    }

    return iSecLarge;
}

int main()
{
    int iArr[5] = {8,3,10,2,6};

    printf("%d\n",findSecLarger(iArr,5));

    return 0;
}