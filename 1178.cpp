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

    int calculateOddSum()
    {
        int iSum = 0;
        int iTemp = 0;

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            if((iTemp % 10) % 2 != 0)
                iSum = iSum + iTemp % 10;
            iTemp = iTemp /10;
        }

        return iSum;
    }};


int main()
{

    Digits d(52374);

    cout<<d.calculateOddSum();
    
    return 0;
}