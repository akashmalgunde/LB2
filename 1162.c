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
    printf("Entered array elements:\n");

    for(int i = 0; i < iSize; i++)
    {
        printf("%d ",iArr[i]);
    }
    printf("\n");
}

void findTarget(int *iArr,int iSize,int iTarget)
{
    for(int i = 0; i < iSize-1; i++)
    {
        for(int j = i + 1; j < iSize; j++)
        {
            if(iArr[i] + iArr[j] == iTarget)
            {
                printf("index %d and %d\n",i,j);
                return;
            }
        }
    }

    printf("no index found to match sum to target\n");
}

int main()
{
    int *iArr = (int *)malloc(sizeof(int)*5);

    accept(iArr,5);
    display(iArr,5);
    
    findTarget(iArr,5,7);
    return 0;
}