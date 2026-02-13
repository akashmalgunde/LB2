#include<iostream>
using namespace std;

class Numbers
{
    int iNo;

    public:

    Numbers(int iNo)
    {
        this->iNo = iNo;
    }

    int calculateProduct()
    {
        int iTemp = 0;
        int iDigit = 0;
        int iProduct = 1;

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iProduct = iProduct * iDigit;
            iTemp = iTemp / 10;
        }

        return iProduct;
    }

    int calculateSum()
    {
        int iTemp = 0;
        int iSum = 0;
        int iDigit = 0;

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + iDigit;
            iTemp = iTemp / 10;
        }

        return iSum;
    }

    bool checkSpy()
    {
        bool bRet = false;

        if(calculateProduct() == calculateSum())
            bRet = true;
        
        return bRet;
    }
};

int main()
{

    Numbers n(11240);

    if(n.checkSpy())
        cout<<"Spy number\n";
    else
        cout<<"Not Spy number\n";

    return 0;
}