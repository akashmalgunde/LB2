#include<iostream>
using namespace std;

class Numbers
{
    private:
    int iNo;

    public:

    Numbers(int i)
    {
        this->iNo = i;
    }

    int calSum()
    {
        int iSum = 0;
        int iTemp = 0;
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

    int calProduct()
    {
        int iProduct = 1;
        int iTemp = 0;
        int iDigit = 0;

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iProduct = iProduct * iDigit;
            iTemp = iTemp / 10;
        }

        return iProduct;
    }

    bool checkSpy()
    {
        bool bRet = false;

        if(calSum() == calProduct())
            bRet = true;

        return bRet;
    }
};

int main()
{
    Numbers n(12);

    if(n.checkSpy())
        cout<<"Spy Number\n";
    else
        cout<<"Not Spy Number\n";

    return 0;
}