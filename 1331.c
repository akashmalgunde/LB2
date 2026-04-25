#include<stdio.h>

void display(int iRows)
{
    for(int i = iRows; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
            printf("%d ",j);


        printf("\n");
    }
}

int main()
{

    display(5);

    return 0;
}