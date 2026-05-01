#include<stdio.h>

void display(int iRows)
{
    int iCnt = 0;

    iCnt = iRows;

    for(int i = 1; i <= iRows; i++,iCnt--)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d ",iCnt);
        }

        printf("\n");
    }
}

int main()
{

    display(5);

    return 0;
}