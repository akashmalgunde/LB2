#include<stdio.h>

int findMin(int iNo)
{
    //printf("%d\n",iNo);
    int iMin = 0;
    int iDigit = 0;

    iMin = 9;
//5115
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iMin > iDigit)
            iMin = iDigit;
        iNo = iNo / 10;

         if(iMin == 0)
        {
            break;
        }
    }

    return iMin;
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    printf("%d",findMin(iNo));

    return 0;
}