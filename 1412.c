#include<stdio.h>

void display(int iRows)
{
    int iCnt = 0;

    iCnt = 1;

    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= i; j++,iCnt++)
        {
            printf("%d ",iCnt*2);
        }

        printf("\n");
    }
}

int main()
{

    display(5);
    
    return 0;
}