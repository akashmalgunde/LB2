#include<stdio.h>

void display(int iRows)
{
    for(int i = 1; i<= iRows; i++)
    {
        for(int k = iRows, j = 1; j <= i; j++,k--)
        {
            printf("%d ",k);
        }

        printf("\n");
    }
}

int main()
{

    display(5);

    return 0;
}