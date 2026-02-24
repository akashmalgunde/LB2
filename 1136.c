#include<stdio.h>


int sumSeries(int iNo)
{
    if(iNo == 0)
        return 0;
    
    return iNo*iNo + sumSeries(iNo-1);
}

int main()
{
    int iNo = 0;

    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    iRet = sumSeries(iNo);

    printf("%d",iRet);

    return 0;
}