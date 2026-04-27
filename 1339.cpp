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

    bool checkZero()
    {
        int iTemp = 0;
        int iDigit = 0;
        bool bRet = false;

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;

            if(iDigit == 0)
            {
                 bRet = true;
                 break;
            }

            iTemp = iTemp / 10;
        }

        return bRet;
    }

    int calLength()
    {
        int iLen = 0;

        int iTemp = 0;

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iLen++;
            iTemp = iTemp / 10;
        }

        return iLen;
    }

    int calPower(int iCnt)
    {
        int iPower = 1; 

        for(int i = 1; i <= iCnt; i++)
            iPower = iPower * 10;

            cout<<"power is :"<<iPower<<"\n";
        return iPower;
    }

    bool startingWithZero()
    {
        bool bRet = false;

        if(this->iNo % calPower(calLength()-1) == 0)
            bRet = true;
        
        return bRet;
    }


    bool checkDuck()
    {
        bool bRet = false;

        if(checkZero() == startingWithZero())
            bRet = true;

        return bRet;
    }
};

int main()
{

    Numbers n(1234);

    if(n.checkDuck())
        cout<<"Duck number\n";
    else
        cout<<"Not Duck Number\n";

    return 0;
}