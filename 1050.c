#include<stdio.h>

int calculateSum(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }

    return iSum;
}

int calSingle(int iNo)
{
    int iSum = 0;
    while(!(iNo >= 0 && iNo <= 9))
    {
        iSum = calculateSum(iNo);
        //iSum
        iNo = iSum;
    }

    return iNo;
}

int main()
{   
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    printf("%d\n",calSingle(iNo));

    return 0;
}