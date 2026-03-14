#include<stdio.h>
#include<stdbool.h>

int calculateSumDig(int iNo)
{
    int iSum = 0;

    while(iNo != 0)
    {
        iSum = iSum + iNo % 10;
        iNo = iNo / 10;
    }

    return iSum;
}

bool checkHarshad(int iNo)
{
    bool bRet = false;

    if(iNo % calculateSumDig(iNo) == 0)
        bRet = true;

    return bRet;
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");

    scanf("%d",&iNo);

    if(checkHarshad(iNo))
        printf("Harshad number\n");
    else
        printf("Number is not harshad\n");

    return 0;
}