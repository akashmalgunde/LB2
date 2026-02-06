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

    int countDigits(int iNo)
    {
        int iTemp = 0;
        int iCount = 0;

        iTemp = iNo;

        while(iTemp != 0)
        {
            iCount++;
            iTemp = iTemp / 10;
        }

        return iCount;
    }

    int calculatePower(int iRaise)
    {
        int iPower = 1;

        for(int i = 1; i <= iRaise; i++)
        {
            iPower = iPower * 10;
        }

        return iPower;
    }

    int calculateReverse(int iNo)
    {
        int iRev = 0;
        int iFirstDigit = 0;
        int iNewNum = 0;
        int iTemp = 0;

        iTemp = iNo * 10;

        cout<<"calculatePower(countDigits(iNo)- 1)"<<calculatePower(countDigits(iNo)- 1)<<"\n";
        iFirstDigit = iNo / calculatePower(countDigits(iNo)- 1);

        iNewNum =  iFirstDigit * calculatePower(countDigits(iNo)- 1);

        iRev = (iTemp - iNewNum)*10 + iFirstDigit;

        cout<<"iTemp"<<iTemp<<"iFirstDigit"<<iFirstDigit<<" iNewNum"<<iNewNum<<" iRev"<<iRev<<"\n";

        return iRev;
    }

    bool checkPrime(int iNo)
    {
        bool bRet = true;

        for(int i = 2; i <= iNo / 2; i++)
        {
            if(iNo % i == 0)
            {
                bRet = false;
                break;
            }
        }

        return bRet;

    }

    bool checkCircularPrime()
    {
        if(countDigits(this->iNo) == 1)
            return true;

        bool bRet = false;
        int i = 0;

        int iTemp = 0;
        iTemp = this->iNo;


        for(i = 1; i <= this->countDigits(this->iNo); i++)
        {
            cout<<iTemp<<"->"<<checkPrime(iTemp)<<"\n";
            if(checkPrime(iTemp))
            {
                iTemp = calculateReverse(iTemp);
            }
            else
            {
                break;
            }
        }
        if(i == 4)
            bRet = true;

        return bRet;
    }
};


int main()
{

    Digits d(13);

    if(d.checkCircularPrime())
        cout<<"Circular prime\n";
    else
        cout<<"Not Circular prime\n";

    return 0;
}