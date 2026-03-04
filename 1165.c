#include<stdio.h>
#include<stdlib.h>

void accept(int *iArr,int iSize)
{
    printf("Enter the array elements:\n");

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

int countEven(int *iArr,int iSize)
{
    int iCnt = 0;

    for(int i = 0; i < iSize; i++)
    {
        if(iArr[i] % 2 == 0)
            iCnt++;
    }

    return iCnt;
}

int main()
{
    int iSize = 0;

    printf("Enter the size of array:\n");
    scanf("%d",&iSize);

    int *iArr = NULL;

    iArr = (int*) malloc(sizeof(int)*iSize);

    accept(iArr,iSize);

    display(iArr,iSize);

    printf("%d count of even digit in an array\n",countEven(iArr,iSize));

    return 0;
}