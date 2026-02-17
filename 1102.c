#include<stdio.h>

int calculateSum(int iNo)
{
    int iPos = 0;
    int iSum = 0;
    int iDigit = 0;

    iPos = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iPos % 2 == 0)
        {
            iSum = iSum + iDigit;
        }
        iNo = iNo / 10;
        iPos++;
    }

    return iSum;
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    int iRet = 0;

    iRet = calculateSum(iNo);

    printf("%d is the sum of digit at even position\n",iRet);

    return 0;
}