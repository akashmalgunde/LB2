#include<iostream>
using namespace std;

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

int calPower(int iNo,int iCnt)
{
    int iPower = 1;

    for(int i = 1; i <= iCnt; i++)
        iPower = iPower * iNo;

    return iPower;
}

bool checkDisarium(int iNo)
{

    bool bRet = false;

    int iTemp = 0;
    int iDigit = 0;
    int iSum = 0;

    iTemp = iNo;

    int iPos = 0;

    iPos = calLen(iNo);

    while(iTemp != 0)
    {
        iDigit = iTemp % 10;

        iSum = iSum + calPower(iDigit,iPos--);

        iTemp = iTemp / 10;
    }

    if(iSum == iNo)
        bRet = true;

    return bRet;


}


int main()
{

    if(checkDisarium(15))
        cout<<"Disarium number\n";
    else
        cout<<"Not Disarium number\n";

    return 0;
}