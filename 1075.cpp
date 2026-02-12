#include<iostream>
using namespace std;

class Numbers
{
    int iNo;

    public:

    Numbers(int i)
    {
        this->iNo = i;
    }

    int countDigits()
    {
        int iTemp = 0;
        int iCnt = 0;

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iCnt++;
            iTemp = iTemp / 10;
        }

        return iCnt;

    }

    int calculatePower(int iNo,int iPower)
    {
        int iResult = 1;

        for(int i = 1; i <= iPower; i++)
        {
            iResult = iResult * iNo;
        }

        return iResult;
    }

    int calculateSum()
    {
        int iTemp = 0;
        int iPos = 0;
        int iSum = 0;
        int iDigit = 0;

        iTemp = this->iNo;
        iPos = countDigits();

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + calculatePower(iDigit,iPos--);
            iTemp = iTemp /10;
        }

        return iSum;
    }

    bool checkDisarium()
    {
        int iSum = 0;
        bool bRet = false;

        iSum = calculateSum();

        if(iSum == this->iNo)
            bRet = true;

        return bRet;

    }
};

int main()
{

    Numbers n(13);

    if(n.checkDisarium())
        cout<<"Disarium\n";
    else
        cout<<"Not Disarium\n";

    return 0;
}