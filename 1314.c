#include<stdio.h>

void checkRel(int *iArr,int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        if(iArr[i] > 60)
            printf("%d ",iArr[i]);
    }
}

int main()
{
    int iArr[] = {10,65,5,60,67};

    checkRel(iArr,5);

    return 0;
}