#include<stdio.h>

void display(int iRows)
{
    for(int i = 1; i <= (iRows / 2 + 1); i++)
    {
        for(int j = 1; j <= i; j++)
            printf("%d ",i);

        printf("\n");
    }

    for(int i = iRows /2; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
            printf("%d ",i);
        
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