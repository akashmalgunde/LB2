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

    int reverseNum()
    {
        int iTemp = 0;
        iTemp = this->iNo;
        int iDigit = 0;
        int iReverse = 0;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iReverse = iReverse * 10 + iDigit;
            iTemp = iTemp / 10;
        }

        return iReverse;
    }

    bool checkPalinrome()
    {
        bool bRet = false;
        if(this->iNo == reverseNum())
            bRet = true;

        return bRet;
    }
};

int main()
{

    Digits d(2552);

    cout<<d.reverseNum()<<"\n";

    if(d.checkPalinrome())
        cout<<"Palindrome\n";
    else
        cout<<"Not Palindrome\n";

    return 0;
}