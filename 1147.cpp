#include<iostream>
using namespace std;

class Digits
{

    int iNo;

    public:
     
    Digits(int d)
    {
        this->iNo = d;
    }

    int calculateCount()
    {
        int iCnt = 0;
        int iTemp = 0;
        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iTemp = iTemp / 10;
            iCnt++;
        }

        return iCnt;
    }

    int calculatePower(int iNo,int iCnt)
    {
        int iPower = 1;

        for(int i = 1; i <= iCnt; i++)
            iPower = iPower * iNo;

        return iPower;
    }

    int calculateSumPower()
    {
        int iTemp = 0;
        int iSum = 0;
        int iCnt = 0;

        iCnt = calculateCount();
        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iSum = calculatePower(iTemp % 10,iCnt) + iSum;
            iTemp = iTemp / 10;
            iCnt--;
        }

        return iSum;
    }

    bool checkDisarium()
    {
        bool bRet = false;

        if(this->iNo == calculateSumPower())
            bRet = true;
        
        return bRet;
    }
};

int main()
{
    Digits d(135);

    if(d.checkDisarium())
        cout<<"Disarium\n";
    else
        cout<<"Not Disarium\n";

    return 0;
}