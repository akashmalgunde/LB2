#include<stdio.h>

void displayDigits(int iNo)
{
    while(iNo != 0)
    {
        printf("%d ",iNo%10);
        iNo = iNo / 10;
    }

    printf("\n");
}

int main()
{

    displayDigits(561615);

    return 0;
}