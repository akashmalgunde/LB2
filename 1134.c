#include<stdio.h>

void display(int iRows)
{
    char ch = '\0';
    for(int i = 1,ch = 'A'; i <= iRows; i++,ch++)
    {   

        for(int j = 1; j <= iRows; j++)
        {
            printf("%c ",ch);
        }

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