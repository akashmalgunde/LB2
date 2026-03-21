#include<stdio.h>
#include<stdbool.h>

bool checkSqr(int iNo)
{
    bool bRet = false;
    int i = 1;
    int iSqr = 0;

    while(iSqr < iNo)
    {
        iSqr = i * i;
        i++;
    }

    if(iSqr == iNo)
        bRet = true;

    return bRet;
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    if(checkSqr(iNo))
        printf("Perfect square\n");
    else
        printf("Not Perfect square");

    return 0;
}