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
        return this->iNo * this->iNo;
    }

    int countDigits()
    {
        int iTemp = 0;
        int iCnt = 0;

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iTemp = iTemp /10;
            iCnt++;
        }

        return iCnt;
    }

    int calculatePower()
    {
        int iCnt = 1;
        int iPower = 1;

        iCnt = countDigits();

        for(int i = 1; i <= iCnt; i++)
        {
            iPower = iPower * 10;
        }

        return iPower;
    }

    bool checkAutomorphic()
    {
        bool bRet = false;

        if(this->iNo == calculateSquare() % calculatePower())
            bRet = true;

        return bRet;
    }

};

int main()
{
    Numbers n(2);

    if(n.checkAutomorphic())
        cout<<"Automorphic\n";
    else
        cout<<"Not Automorphic\n";

    return 0;
}