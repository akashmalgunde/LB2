#include<stdio.h>
#include<stdlib.h>

int findMinDif(int *iArr,int iSize)
{
    int iMinDif = 0;
    int iDif = 0;

    iMinDif = RAND_MAX;

    printf("%d is the max val\n",iMinDif);

    for(int i = 0; i < iSize; i++)
    {
        for(int j = i + 1; j < iSize; j++)
        {
            if(iArr[i] > iArr[j])
                iDif = iArr[i] - iArr[j];
            else
                iDif = iArr[j] - iArr[i];

            if(iMinDif > iDif)
                iMinDif = iDif;
        }
    }

    return iMinDif;
}

int main()
{

    int iArr[] = {4, 9, 1, 32, 13};

    printf("%d is the min difference",findMinDif(iArr,5));

    return 0;
}