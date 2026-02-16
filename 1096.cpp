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
};

int main()
{
    Digits d(516521);

    if(d.checkZero())
        cout<<"Present\n";
    else
        cout<<"Not Present\n";

    return 0;
}