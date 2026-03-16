#include<iostream>
using namespace std;

class Numbers
{
    private: int iNo;

    public:
    Numbers(int iNo)
    {
        this->iNo = iNo;
    }

    int calSquare()
    {
        return this->iNo*this->iNo;
    }

    int countDigit()
    {
        int iTemp = 0;
        int iCnt =0 ;

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iTemp = iTemp / 10;
            iCnt++;
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

    bool checkAutoMorhic()
    {
        bool bRet = false;

        if(this->iNo == calSquare() % calPower(countDigit()) )
            bRet = true;

        return bRet;
    }


};

int main()
{
    Numbers n(4);

    if(n.checkAutoMorhic())
        cout<<"Automorphic\n";
    else
        cout<<"Not Automoprphic\n";
    return 0;
}