#include<stdio.h>

void displayDivisor(int iNo)
{
    for(int i = 1; i <= iNo / 2; i++)
    {
        if(iNo % i == 0)
        {
            printf("%d ",i);
        }
    }

    printf("\n");
}

int main()
{
    displayDivisor(64);

    return 0;
}