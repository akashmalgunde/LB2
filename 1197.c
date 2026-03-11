#include<stdio.h>

int calNums(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > 5 )
            iCnt++;
        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    printf("%d",calNums(iNo));

    return 0;
}