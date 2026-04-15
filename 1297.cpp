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

    int sum()
    {
        int iTemp = 0;
        int iDigit = 0;
        int iCnt = 0;
        int iSum = 0;

        iCnt = 1;
        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iTemp = iTemp / 10;

            if(iCnt % 2 == 0)
            {
                iSum = iSum + iDigit;
            }

            iCnt++;
        }
        return iSum;
    }

};

int main()
{

    Digits d(123456);

    cout<<d.sum()<<"\n";

    return 0;
}