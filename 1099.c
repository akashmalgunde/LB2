#include<stdio.h>

int countDigit(int iNo,int iDigit)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        if(iNo % 10 == iDigit)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iNo = 0;
    int iDigit = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    printf("Enter the digit:\n");
    scanf("%d",&iDigit);

    iRet = countDigit(iNo,iDigit);

    printf("%d\n",iRet);

    return 0;
}