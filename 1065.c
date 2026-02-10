#include<stdio.h>

int calculateFactorial(int iNum)
{
    int iFact = 1;

    for(int i = 2; i <= iNum; i++)
        iFact = iFact * i;

    return iFact;
}

int calculateSum(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = calculateFactorial(iDigit) + iSum;
        iNo = iNo / 10;
    }

    return iSum;
}

int checkPeterson(int iNo)
{
    int iSumFact = 0;

    iSumFact = calculateSum(iNo);

    if(iSumFact == iNo)
        return 1;
    else
        return 0;
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    if(checkPeterson(iNo))
    {
        printf("Peterson number\n");
    }
    else
        printf("Not Peterson number\n");

    return 0;
}