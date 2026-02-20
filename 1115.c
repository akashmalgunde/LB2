#include<stdio.h>

int calculateDiff(int iNo)
{
    int iDigit = 0;
    int iMin = 9;
    int iMax = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
            iMax = iDigit;
        else if(iDigit < iMin)
            iMin = iDigit;
        iNo = iNo / 10;

        if(iMin == 0 && iMax == 9)
            break;
    }

    return iMax - iMin;
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    printf("%d ",calculateDiff(iNo));

    return 0;
}