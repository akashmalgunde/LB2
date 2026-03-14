#include<stdio.h>

int calculateSumEven(int iNo)
{

    int iSum = 0;

    while(iNo != 0)
    {
        if((iNo % 10) % 2 == 0)
            iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
    }

    return iSum;

}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");

    scanf("%d",&iNo);

    printf("%d",calculateSumEven(iNo));


    return 0;
}