#include<stdio.h>

void display(int iRows)
{

    int iCnt = 0;

    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= i; j++)
            printf("%d ",++iCnt);

        printf("\n");
    }
}

int main()
{
    int iRows = 0;

    printf("Enter the number:\n");
    scanf("%d",&iRows);

    display(iRows);

    return 0;
}