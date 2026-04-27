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

    int calLen()
    {
        int iTemp = 0;
        int iCnt =0;

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iCnt++;
            iTemp = iTemp / 10;
        }

        return iCnt;
    }

    int calPower(int iCnt)
    {
        int iPower = 1;

        for(int i = 1; i <= iCnt; i++)
            iPower = iPower * 10;

        return iPower;
    }

    int findFirstDigit()
    {
        int iFirst = 0;

        iFirst = this->iNo / calPower(calLen() - 1);

        return iFirst;
    }

    int calSum()
    {
        int iFirst = 0;
        int iTemp = 0;
        int iDigit = 0;
        int iSum = 0;

        iFirst = findFirstDigit();

        //cout<<"First digit is :"<<iFirst<<"\n";

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;

            if(iDigit > iFirst)
                iSum = iSum + iDigit;

            iTemp = iTemp / 10;
        }

        return iSum;
    }
};

int  main()
{

    Digits d(583274);

    cout<<d.calSum()<<"\n";

    return 0;
}