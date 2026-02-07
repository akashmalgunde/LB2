#include<stdio.h>

void display(int iRows)
{
    int iCnt1 = 0;
    int iCnt2 = 0;

    iCnt1 = iRows;
    iCnt2 = iRows;

    for(int i = 1; i <= iRows; i++,iCnt1--,iCnt2++)
    {
        for(int j = 1; j < iRows*2; j++)
        {
            if(j >= iCnt1 && j <= iCnt2)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }
    iCnt1 += 2;
    iCnt2 -= 2;

    for(int i = 1; i < iRows; i++,iCnt1++,iCnt2--)
    {
        for(int j = 1; j < iRows * 2; j++)
        {
            if(j >= iCnt1 && j <= iCnt2)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }
}

int main()
{

    int iRows  = 0;

    printf("Enter the Number of rows:\n");
    scanf("%d",&iRows);

    display(iRows);

    return 0;
}