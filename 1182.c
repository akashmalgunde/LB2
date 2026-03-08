#include<stdio.h>

void displayNum(int iNo)
{
    if(iNo > 1)
    {
        printf("Even numbers\n");
        for(int i = 1; i <= iNo; i++)
            if(i % 2 == 0)
                printf("%d ",i);
    }
}

void displayOddNum(int iNo)
{
    if(iNo > 1)
    {
        printf("odd numbers\n");
        for(int i = 1; i <= iNo; i++)
            if(i % 2 != 0)
                printf("%d ",i);
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    displayNum(iNo);

    displayOddNum(iNo);

    return 0;
}