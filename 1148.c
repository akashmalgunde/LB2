#include<stdio.h>

void display(int iRows)
{
    char ch = '\0';
    ch = 'A';

    for(int i  = 1; i <= iRows; i++,ch++)
    {
        for(int j = 1; j <= i; j++)
            printf("%c",ch);
        
        printf("\n");
    }

    ch = ch - 2;

    for(int i = iRows - 1; i >= 1; i--,ch--)
    {
        for(int j = 1; j <= i; j++)
            printf("%c",ch);

        printf("\n");
    }
}

int main()
{
    int iRows = 0;

    iRows = 5;

    display(iRows);

    return 0;
}