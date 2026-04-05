#include<stdio.h>

int calProduct(int iNo)
{
    if(iNo == 0)
        return -1;

    int iProduct = 1;

    while(iNo != 0)
    {
        iProduct = (iNo % 10) * iProduct;
        iNo = iNo / 10;
    }

    return iProduct;
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    int iRet = 0;

    iRet = calProduct(iNo);

    if(iRet != -1)
        printf("%d is the product\n",calProduct(iNo));
    else
        printf("given number is zero please enter the valid number\n");


    return 0;
}