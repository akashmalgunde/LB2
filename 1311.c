#include<stdio.h>

void display(int iRows)
{
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= iRows; j++)
            printf("* ");
        
        printf("\n");
    }
}

int main()
{

    display(5);

    return 0;
}