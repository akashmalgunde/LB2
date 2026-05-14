#include<stdio.h>

void display(int iRows)
{
    char ch = '\0';

    ch = 'A';

    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= i; j++)
            printf("%c ",ch++);

        printf("\n");
    }
}

int main()
{

    display(5);

    return 0;
}