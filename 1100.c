#include<stdio.h>

void display(int iRows)
{
    int iCnt1 = 0;
    int iCnt2 = 0;

    iCnt1 = 1;
    iCnt2 = iRows *2 -1;

    int iPrint = 0;

    // = 1;

    for(int i = 1; i <= iRows; i++,iCnt1++,iCnt2--)
    {
        iPrint = i;
        for(int j = 1; j < iRows *2; j++)
        {

            if(j >= iCnt1 && j <= iCnt2)
            {
                if(i % 2 != 0)
            {
                if(j % 2 != 0)
                { 
                    printf("%d ",iPrint++);
                }
                else
                    printf("  ");
            }
            else if(i % 2 == 0)
            {
                 if(j % 2 == 0)
                {
                    if(j >= iCnt1 && j <= iCnt2)
                        printf("%d ",iPrint++);
                }
                else
                {
                    printf("  ");
                }
            }            
                 
            }

            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

            iCnt1 -= 2;
            iCnt2 += 2;
            for(int i = iRows - 1; i >= 1; i--,iCnt1--,iCnt2++)
    {
        iPrint = i;
        for(int j = 1; j < iRows *2; j++)
        {

            if(j >= iCnt1 && j <= iCnt2)
            {
                if(i % 2 != 0)
            {
                if(j % 2 != 0)
                { 
                    printf("%d ",iPrint++);
                }
                else
                    printf("  ");
            }
            else if(i % 2 == 0)
            {
                 if(j % 2 == 0)
                {
                    if(j >= iCnt1 && j <= iCnt2)
                        printf("%d ",iPrint++);
                }
                else
                {
                    printf("  ");
                }
            }            
                 
            }

            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

}

int main()
{
    int iRows = 0;

    printf("Enter the number of rows:\n");
    scanf("%d",&iRows);

    display(iRows);

    return 0;
}