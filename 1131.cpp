#include<iostream>
using namespace std;

class Digits
{
    int iNo;

    public:
    Digits(int i)
    {
        this->iNo = i;
    }

    bool checkDigit(int iNo)
    {
        int iTemp = 0;
        int iCount = 0;

        iCount = 0;

        iTemp = this->iNo;

        bool bRet = false;

        while(iTemp != 0)
        {
            if(iTemp % 10 == iNo)
            {
                iCount++;
            }
            iTemp = iTemp / 10;
        }
        if(iCount == 1)
            bRet = true;

        return bRet;
    }

    bool checkUnique()
    {
        int iTemp = 0;

        iTemp = this->iNo;
        bool bRet = true;

        while(iTemp != 0)
        {
            if(!checkDigit(iTemp % 10))
            {
                bRet = false;
                break;
            }
            iTemp = iTemp / 10;
        }

        return bRet;
    }
};


int main()
{
    Digits d(124);

    if(d.checkUnique())
        cout<<"Unique digits\n";
    else
        cout<<"Not Unique digits\n";

    return 0;
}