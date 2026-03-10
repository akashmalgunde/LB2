#include<iostream>
using namespace std;

class Numbers
{
    private:
    int iNo;

    public:

    Numbers(int iNo)
    {
        this->iNo = iNo;
    }
    
    int countDigit()
    {
        int iTemp = 0;
        iTemp = this->iNo;
        int iCnt = 0;

        while(iTemp != 0)
        {
            iCnt++;
            iTemp = iTemp / 10;
        }
        return iCnt;
    }

    int calculatePower(int iNo)
    {
        int iCnt = 0;

        iCnt = this->countDigit();

        int iPower = 1;

        for(int i = 1; i <= iCnt; i++)
        {
            iPower = iPower * iNo;
        }

        return iPower;
    }

    int checkSum()
    {
        int iTemp = 0;
        int iSum = 0;
        int iDigit = 0;

        iTemp = this->iNo;
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + this->calculatePower(iDigit);
            iTemp = iTemp / 10;
        }

        return iSum;
    }

    bool checkArmstrong()
    {
        bool bRet = false;

        if(this->checkSum() == this->iNo)
            bRet = true;

        return bRet;
    }
};

int main()
{
    Numbers n(153);

    if(n.checkArmstrong())
        cout<<"Armstrong\n";
    else
        cout<<" not Armstrong\n";

    return 0;
}