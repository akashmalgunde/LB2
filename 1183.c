#include<stdio.h>

int calculateDigit(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;
    }

    return iCnt;
}

int calculateSum(int iNo)
{
    int iSum = 0;

    int i = 0;

    int iTotalDigit = 0;

    iTotalDigit = calculateDigit(iNo);

    while(iNo != 0)
    {
        i++;
        if(i == 1 || i == iTotalDigit)
            iSum = iSum + iNo % 10;

        iNo = iNo /10;
    }

    return iSum;
}

int main()
{
    int iNo = 0;

    printf("Enter the num\n");
    scanf("%d",&iNo);

    printf("%d\n",calculateSum(iNo));

    return 0;
}