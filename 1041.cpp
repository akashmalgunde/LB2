#include<iostream>
using namespace std;
#define MAXITERATION 50


class Number
{
    int iNo;

    public:

    Number(int iNo)
    {
        this->iNo = iNo;
    }

    int calculateSum(int iNo1,int iNo2)
    {
        return iNo1 + iNo2;
    }

    int calculateReverese(int iNo)
    {
        int iTemp = 0;
        int iDigit = 0;
        int iRev = 0;

        iTemp = iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iRev = iRev * 10 + iDigit;
            iTemp = iTemp / 10;
        }

        return iRev;
    }

    bool checkPalindrome(int iNo)
    {
        int iTemp = 0;
        bool bRet = false;
        int iRev = 0;
        int iDigit = 0;

        iTemp = iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iRev = iRev * 10 + iDigit;
            iTemp = iTemp / 10;
        }

        if(iRev == iNo)
            bRet = true;

        return bRet;
    }

    bool checkLychrel()
    {
        bool bRet = false;
        unsigned long int iTemp = 0;

        iTemp = this->iNo;

        for(int i = 1; i <= MAXITERATION; i++)
        {
            unsigned long int iSum = 0;
            unsigned long int iRev = 0;

            iSum = iTemp + calculateReverese(iTemp);

            cout<<iSum<<"\n";
            if(checkPalindrome(iSum))
            {
                 bRet = true;
                 break;
            }

            iTemp = iSum;
        }

        return bRet;
    }
};

int main()
{
    int iNo = 0;

    cout<<"enter the number:\n";
    cin>>iNo;

    Number n(iNo);

    if(n.checkLychrel())
        cout<<"Number is Lychrel Number\n";
    else
        cout<<"Number is not Lychrel Number after 20 iterations\n";

    return 0;
}