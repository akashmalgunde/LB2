#include<iostream>
using namespace std;

class Numbers
{
    private:
    int iNo;

    public:

    Numbers(int iNo)
    {
        this->iNo = iNo;
    }

    int reverseNum()
    {
        int iTemp = 0;
        int iDigit = 0;
        int iRev = 0;

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iRev = iRev * 10 + iDigit;
            iTemp = iTemp / 10;
        }

        return iRev;
    }

    bool checkPalindrome()
    {
        bool bRet = false;

        if(this->iNo == reverseNum())
            bRet = true;

        return bRet;
    }
};

int main()
{
    Numbers n(121);

    if(n.checkPalindrome())
        cout<<"Palindrome number\n";
    else
        cout<<"Not Palindrome number\n";

    return 0;
}