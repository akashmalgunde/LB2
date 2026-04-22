#include<stdio.h>
#include<stdbool.h>

int calCube(int iNo)
{
    int iCube = 1;

    for(int i = 1; i <= 3; i++)
    {
        iCube = iCube * iNo;
    }

    return iCube;
}

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

int calPower(int iCnt)
{
    int iPower = 1; 

    for(int i = 1; i <= iCnt; i++)
    {
        iPower = iPower * 10;
    }
    return iPower;
}

bool checkTrimorphic(int iNo)
{
    bool bRet = false;

    if(calCube(iNo) % calPower(calLen(iNo)) == iNo)
        bRet = true;

    return bRet;
}

int main()
{

    int iNo = 7;
    if(checkTrimorphic(iNo))
        printf("%d is trimorphic number\n",iNo);
    else
        printf("%d is not trimorphic number\n",iNo);

    return 0;
}