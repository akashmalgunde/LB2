#include<stdio.h>

void display(int iRows)
{
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= iRows; j++)
        {
            if(j <= i)
                printf("%d ",j);
            else
                printf("  ");
        }

        for(int k = iRows-1; k >= 1; k--)
        {
            if(k <= i)
            {
                printf("%d ",k);
            }
            else
                printf("  ");
        }

        printf("\n");
    }
}

int main()
{
    int iRows = 0;

    printf("Enter the number  of rows:\n");
    scanf("%d",&iRows);

    display(iRows);

    return 0;
}