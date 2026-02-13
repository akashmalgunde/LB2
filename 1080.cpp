#include<iostream>
using namespace std;


class Digits
{
    int iNo;

    public:

    Digits(int iNo)
    {
        this->iNo = iNo;
    }

    int countEven()
    {
        int iTemp = 0;
        int iCnt = 0;
        int iDigit = 0;

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;

            if(iDigit % 2 == 0)
                iCnt++;

            iTemp = iTemp / 10;
        }

        return iCnt;
    }
};

int main()
{

    Digits d(15152355);

    cout<<d.countEven();
    
    return 0;
}