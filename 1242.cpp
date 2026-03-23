#include<iostream>
using namespace std;

class Digits
{
    private:
    int iNo;

    public:

    Digits(int i)
    {
        this->iNo = i;
    }

    int diff()
    {
        int iTemp = 0;
        int iEvenSum = 0;
        int iOddSum = 0;

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            if((iTemp % 10) % 2 == 0)
                iEvenSum = (iTemp % 10) + iEvenSum;
            else
                iOddSum = iOddSum + (iTemp % 10);

            iTemp = iTemp / 10;
        }

        return iEvenSum - iOddSum;
    }
};

int main()
{

    Digits d(429841);

    cout<<d.diff()<<"\n";

    return 0;
}