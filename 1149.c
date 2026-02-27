#include<stdio.h>

void displayAsciiTable()
{
    for(int i = 1; i <= 256; i++)
        printf("%d - > %c \n",i,i);
}

int main()
{
    displayAsciiTable();

    return 0;
}