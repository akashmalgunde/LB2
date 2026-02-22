#include<iostream>
using namespace std;

class Number
{

    int iNo;

    public:
    Number(int i)
    {
        this->iNo = i;
    }

    int countDigit()
    {
        int iTemp = 0;
        iTemp = this->iNo;
        int iCount = 0;

        while(iTemp != 0)
        {
            iTemp = iTemp / 10;
            iCount++;
        }

        return iCount;
    }

    int calculatePower(int iCount)
    {
        int iPower = 1;

        for(int i = 1; i <= iCount; i++)
        {
            iPower = iPower * 10;
        }

        return iPower;
    }

    bool checkZero()
    {
        int iTemp = 0;
        bool bRet = false;
        iTemp = this->iNo;

        while(iTemp != 0)
        {
            if(iTemp % 10 == 0)
            {
                bRet = true;
                break;
            }
            iTemp = iTemp / 10;
        }

        return bRet;
    }

    bool checkDuck()
    {
        bool bRet = false;

        if(checkZero() == true && this->iNo % calculatePower(countDigit()-1) != 0)
            bRet = true;

        return bRet;
    }
};

int main()
{
    Number n(0223);
    if(n.checkDuck())
        cout<<"Duck number\n";
    else
        cout<<"Not Duck number\n";

    return 0;
}