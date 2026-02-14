#include<stdio.h>

void display(int iNo,int iRows)
{
    int iCnt = 0;
    //iCnt = iNo;
    for(int i = 1; i <= iRows; i++)
    {
        iCnt = iCnt + iNo;
        for(int j = 1; j <= iRows; j++)
        {
            printf("%d ",iCnt * j);
        }

        printf("\n");
    }
}

int main()
{
    int iNo = 0;
    int iRows = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    printf("Enter the number of rows\n");
    scanf("%d",&iRows);

    display(iNo,iRows);

    return 0;
}