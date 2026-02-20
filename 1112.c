#include<stdio.h>

void display(int iRows)
{
    int iCnt1 = 0;
    int iCnt2 = 0;

    iCnt1 = iRows;
    iCnt2 = iRows;
    int iTemp = 0;
    int iOne = 0;

    for(int i = 1; i <= iRows; i++,iCnt1--,iCnt2++)
    {
        iOne = 1;
        iTemp = i - 1;
        for(int j = 1; j < iRows *2 ; j++)
        {
            if(j >= iCnt1 && j <= iCnt2)
            {
                if(iOne <= i)
                    printf("%d ",iOne++);
                else
                {
                    printf("%d ",iTemp--);
                }
            }
            else
                printf("  ");
        }

        printf("\n");
    }

    iCnt1 += 2;
    iCnt2 -= 2;

    for(int i = iRows -1; i >= 1; i--,iCnt1++,iCnt2--)
    {
        iOne = 1;
        iTemp = i - 1;
        for(int j = 1; j < iRows*2; j++)
        {
            if(j >= iCnt1 && j <= iCnt2)
            {
                if(iOne <= i)
                    printf("%d ",iOne++);
                else
                {
                    printf("%d ",iTemp--);
                }
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main(int argc,char* argcv)
{

    int iRows = 0;

    printf("Enter the number of rows:\n");
    scanf("%d",&iRows);

    display(iRows);

    return 0;
}