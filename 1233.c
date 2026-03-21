#include<stdio.h>

int minimize(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    printf("Coming inside function\n");
    while(!(iNo >= 0 && iNo <= 9))
    {
        printf("Coming inside\n");
        iSum = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        printf("iSum = %d\n",iSum);
        iNo = iSum;
    }

    printf("Outside loop\n");

    return iNo;
}

int main()
{
    int iNo = 0;

    printf("enter the number:\n");
    scanf("%d",&iNo);

    int iRet = minimize(iNo);

    printf("%d\n",iRet);

    return 0;
}