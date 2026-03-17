#include<stdio.h>
#include<stdbool.h>

bool checkAbundant(int iNo)
{

    bool bRet = false;
    int iSum = 0;
    for(int i = 1; i <= iNo /2; i++)
    {
        if(iNo % i == 0)
            iSum = iSum + i;

    }

    if(iSum > iNo)
        bRet = true;

    return bRet;
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    if(checkAbundant(iNo))
        printf("Abundant\n");
    else
        printf("Not an abudant\n");

    return 0;
}