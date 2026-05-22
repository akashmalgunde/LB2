#include<stdio.h>

void display(int iRows)
{
    int iCnt1 = 0;
    int iCnt2 = 0;


    iCnt1 = iRows;
    iCnt2 = iRows;

    for(int i = 1; i < iRows; i++,iCnt1--,iCnt2++)
    {
        for(int j = 1; j < iRows*2; j++)
        {
            if(iCnt1 <= j && iCnt2 >= j)
                printf("%d ",i);
            else
                printf("  ");
        }

        printf("\n");
    }

}

int main()
{
    display(5);

    return 0;
}