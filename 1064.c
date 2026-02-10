#include<stdio.h>

void display(int iRows)
{
    if(iRows % 2 == 0 || iRows <= 1)
    {
        printf("Not eligible for pattern\n");
        return;
    }

    int iMid = 0;

    iMid = (iRows / 2) + 1;

    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= iRows; j++)
        {
            if(i == 1 || j == 1 || i == iRows || j == iRows || i == iMid && j == iMid)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }
}

int main()
{
    int iRows = 0;

    printf("Enter the no of rows:\n");
    scanf("%d",&iRows);

    display(iRows);

    return 0;
}