#include<stdio.h>
#include<stdlib.h>

void accept(int *iArr,int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&iArr[i]);
    }
}

void display(int *iArr,int iSize)
{
    printf("Entered array elements are:\n");
    for(int i = 0; i < iSize; i++)
    {
        printf("%d ",iArr[i]);
    }
    printf("\n");
}

int checkSecondMax(int *iArr,int iSize)
{
    int iMax = 0;
    int iSecMax = 0;

    iMax = iArr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(iMax < iArr[i])
        {
            iSecMax = iMax;
            iMax = iArr[i];
        }
        else if(iSecMax < iArr[i])
        {
            iSecMax = iArr[i];
        }
    }

    return iSecMax;
}
int main()
{
    int *iArr = (int*)malloc(sizeof(int) * 5);

    accept(iArr,5);

    display(iArr,5);

    printf("%d is second maximum elements in the array\n",checkSecondMax(iArr,5));

    return 0;
}