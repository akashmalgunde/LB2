#include<stdio.h>

void display(int iRows)
{
    int iCnt = 1;
    int iCnt1 = iRows;
    int iCnt2 = iRows;

    for(int i = 1; i <= iRows; i++,iCnt1--,iCnt2++)
    {
        for(int j = 1; j < iRows*2; j++)
        {
            if(j >= iCnt1 && j <= iCnt2)
                printf("%d ",iCnt++);
            else
                printf("  ");
        }

        printf("\n");
    }
}

int main()
{
    int iRows = 5;

    display(iRows);

    return 0;
}