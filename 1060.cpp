#include<iostream>
using namespace std;

class Numbers
{
    int iNo;

    public:
    Numbers(int iNo)
    {
        this->iNo = iNo;
    }

    int calculateSquare()
    {
        return this->iNo * iNo;
    }

    int countDigit()
    {
        int iTemp = 0;
        int iCount = 0;
        int iCnt = 0;

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iCnt++;
            iTemp = iTemp / 10;
        }

        return iCnt;
    }

    int calculatePower()
    {
        int iCnt = 0;

        iCnt = countDigit();

        int iPower = 1;

        for(int i = 1; i <= iCnt; i++)
        {
            iPower = iPower * 10;
        }

        return iPower;
    }

    bool checkAutomorphic()
    {
        int iSquare = 0;
        bool bRet = false;

        iSquare = calculateSquare();

        if(iSquare % calculatePower() == this->iNo)
            bRet = true;
        
        return bRet;
    }
};


int main()
{
    Numbers n(1651);

    if(n.checkAutomorphic())
        cout<<"Automorphic\n";
    else
        cout<<"Not Automorphic\n";

    return 0;
}