#include<stdio.h>
#include<stdbool.h>

int calLen(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;
    }

    return iCnt;
}

int calPower(int iCnt )
{
    int iPower = 1;

    for(int i = 1; i <= iCnt; i++)
        iPower = iPower * 10;

    return iPower;
}

int calSquare(int iNo)
{
    return iNo * iNo;
}

bool checkAutomorphic(int iNo)
{
    bool bRet = false;

    if(iNo == calSquare(iNo) % calPower(calLen(iNo)))
        bRet = true;

    return bRet;
}

int main()
{

    if(checkAutomorphic(4))
        printf("Automorphic\n");
    else
        printf("Not Automorphic\n");

    return 0;
}