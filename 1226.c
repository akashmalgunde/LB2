#include<stdio.h>

void display(int iRows)
{
    int iCnt = 0;
    for(int i = iRows; i >= 1; i--)
    {
        iCnt = iRows;
        for(int j = 1; j <= i; j++)
            printf("%d ",iCnt--);
        
        printf("\n");
    }
}

int main()
{
    display(5);

    return 0;
}