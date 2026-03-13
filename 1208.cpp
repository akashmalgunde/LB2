#include<iostream>
using namespace std;

class Digits
{
    private:

    int iNo;

    public:
    Digits(int iNo)
    {
        this->iNo = iNo;
    }

    int findSmall()
    {
        int iMin = 0;

        iMin = 9;
        int iDigit = 0;
        int iTemp = 0;

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iMin > iDigit)
                iMin = iDigit;

            if(iDigit == 0)
                break;

            iTemp = iTemp / 10;
        }

        return iMin;
    }
};


int main()
{
    Digits d(513210);

    cout<<d.findSmall()<<"\n";

    return 0;
}