#include<stdio.h>

void display(int iRows)
{
    char ch = '\0';

    for(int i = 1; i <= iRows; i++)
    {
        ch = 'A';
        for(int j = 1; j <= i; j++,ch++)
            printf("%c ",ch);
        
        printf("\n");

    }
}


int main()
{

    display(5);

    return 0;
}