#include<iostream>
using namespace std;

class Digits
{
    private:
    int iNo;

    public:
    Digits(int iNo)
    {
        this->iNo  = iNo;
    }

    bool checkPrime(int iNo)
    {
        bool bRet = true;

        if(iNo == 1)
            return false;
        for(int i = 2; i <= iNo/2; i++)
            if(iNo % i == 0)
            {
                bRet = false;
                break;
            }
        
        return bRet;
    }

    int calSumPrimePos()
    {
       int iCnt = 0;
       int iTemp = 0;
       int iDigit = 0;
       int iSum = 0;
       
       iTemp = this->iNo;

       while(iTemp != 0)
       {
            iCnt++;
            iDigit = iTemp % 10;
            if(checkPrime(iCnt))
                iSum = iSum + iDigit;
            iTemp = iTemp / 10;
       }

       return iSum;
    }
};

int main()
{
    Digits d(1234567);

    cout<<d.calSumPrimePos()<<" is the sum position which is prime\n";

    return 0;
}