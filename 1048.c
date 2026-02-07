#include<stdio.h>
#include<stdbool.h>

int calculateSquare(int iNo)
{
    return iNo * iNo;
}

int calculateSum(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + calculateSquare(iDigit);
        iNo = iNo / 10;
    }
    return iSum;
}

bool checkHappy(int iNo)
{
    int iTemp = 0;
    int iSum = 0;
    bool bRet = false;

    iTemp = iNo;

    while(!(iTemp >= 0 && iTemp <= 9))
    {
        iSum = calculateSum(iTemp);
        //printf("iSum = %d\n",iSum);
        iTemp = iSum;
    }

    if(iTemp == 1)
        bRet = true;

    return bRet;

}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    if(checkHappy(iNo))
        printf("Happy number\n");
    else
        printf("Not Happy number\n");

    return 0;
}