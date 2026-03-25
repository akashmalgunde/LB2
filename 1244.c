#include<stdio.h>
#include<stdbool.h>

int calculateLen(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        iNo = iNo / 10;
        iCnt++;
    }

    return iCnt;
}

int calculatePower(int iCnt)
{
    int iPower = 1;

    for(int i = 1; i <= iCnt; i++)
    {
        iPower = iPower * 10;
    }

    return iPower;
}

int calculateSquare(int iNo)
{
    return iNo * iNo;
}

bool checkTech(int iNo)
{
    int iSquare = 0;
    bool bRet = false;
    int iFirst = 0;
    int iLast = 0;

    int iPower = 0;

    int iLen = 0;

    iLen = calculateLen(iNo);

    if(iLen % 2 == 0)
        iPower = calculatePower(iLen/2);
    else
        iPower = calculatePower((iLen / 2 )+ 1);

    iFirst = iNo / iPower;
    iLast = iNo % iPower;

    //printf("first %d\n",iFirst);
    //printf("Last %d\n",iLast);
    iSquare = calculateSquare(iFirst + iLast);

    if(iSquare == iNo)
        bRet = true;

    return bRet;

}

int main()
{
    int iNo = 0;

    printf("enter the number:\n");
    scanf("%d",&iNo);

    if(checkTech(iNo))
        printf("Tech one");
    else
        printf("Not Tech");

    return 0;
}