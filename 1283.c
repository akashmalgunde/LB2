#include<stdio.h>
#include<stdbool.h>

int count(int iNo,int iDigit)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        if(iNo % 10 == iDigit)
            iCnt++;

        iNo = iNo / 10;
    }

    return iCnt;
}

bool checkUnique(int iNo)
{
    int iTemp = iNo;
    bool bRet = true;

    while(iNo != 0)
    {
        if(count(iTemp,iNo%10) != 1)
        {
            bRet = false;
            break;
        }
        iNo = iNo / 10;
    }

    return bRet;
}

int main()
{
    if(checkUnique(12341))
        printf("Unique\n");
    else
        printf("Not unique\n");

    return 0;
}