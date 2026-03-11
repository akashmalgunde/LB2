#include<stdio.h>
#define bool int
#define true 1
#define false 0

int calRev(int iNo)
{
    int iRev = 0;

    while(iNo != 0)
    {
        iRev = (iRev * 10) + (iNo % 10);
        iNo = iNo / 10;
    }

    return iRev;
}

bool checkPal(int iNo)
{
    bool bRet = false;

    if(iNo == calRev(iNo))
        bRet = true;

    return bRet;
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    if(checkPal(iNo))
        printf("Pal");
    else 
        printf("Not Pal");

    return 0;
}