#include<stdio.h>
#include<stdbool.h>
int calLength(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;
    }

    return iCnt;
}

int calPower(int iPower)
{
    int iRes = 1;

    for(int i = 1; i <= iPower; i++)
        iRes = iRes * 10;

    return iRes;
}

int calSquare(int iNo)
{
    return iNo * iNo;
}

int getSum(int iNo)
{
    int iLen = calLength(iNo);
    int iPower = 0;
    int iNewNum= 0;

    if(iLen % 2 == 0)
        iPower = calPower(iLen / 2);
    else
        iPower = calPower(iLen / 2 + 1);
    
    iNewNum = (iNo % iPower) + (iNo / iPower);

    return iNewNum;
}

bool checkTech(int iNo)
{
    
    int iNewNum = getSum(iNo);

    //printf("%d is the newnum\n",iNewNum);
    bool bRet = false;

    if(calSquare(iNewNum) == iNo)
        bRet = true;

    return bRet;
}


int main()
{

    if(checkTech(2025))
        printf("Tech number\n");
    else
        printf("Not tech number\n");
    return 0;
}