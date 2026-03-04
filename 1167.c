#include<stdio.h>
#include<stdbool.h>

int findSmallest(int iNo)
{
    int iSmall = 9;

    while(iNo != 0)
    {
        if(iSmall > iNo % 10)
            iSmall = iNo % 10;
        
        if(iSmall == 0)
            break;
        iNo = iNo / 10;
    }

    return iSmall;
}
int main()
{

    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    printf("%d",findSmallest(iNo));

    return 0;
}