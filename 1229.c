#include<stdio.h>

void display(int iRows)
{
    int iCnt = 0;

    for(int i = 1; i <= iRows; i++)
    {
        iCnt = i;
        for(int j = iRows; j >= i; j--)
            printf("%d ",iCnt++);
        
        printf("\n");
    }
}

int main()
{
    int iRows = 0;

    printf("Enter the number of rows:\n");
    scanf("%d",&iRows);

    display(iRows);

    return 0;
}