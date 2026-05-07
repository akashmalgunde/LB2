#include<stdio.h>
#include<stdbool.h>

int calLen(int iNo)
{
    int iLen = 0;

    while(iNo != 0)
    {
        iLen++;
        iNo = iNo / 10;
    }

    return iLen;
}

int calPower(int iNo, int iCnt)
{
    int iPower = 1;

    for(int i = 1; i <= iCnt; i++)
        iPower = iPower * iNo;

    return iPower;
}

int calSumPower(int iNo)
{
    int iLen = 0;
    int iRet = 0;

    iLen = calLen(iNo);

    while(iNo != 0)
    {
        iRet = iRet + calPower(iNo % 10,iLen);
        iNo = iNo / 10;
    }

    return iRet;

}

bool checkArmStrong(int iNo)
{
    bool bRet = false;

    //printf("%d is final ans",calSumPower(iNo));

    if(iNo == calSumPower(iNo))
        bRet = true;

    return bRet;
}

int main()
{

    if(checkArmStrong(153))
        printf("Armstrong number\n");
    else
        printf("Not ArmStrong number\n");

    return 0;
}