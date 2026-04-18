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

    int calLength()
    {
        int iTemp = 0;
        int iCnt = 0;
        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iCnt++;
            iTemp = iTemp / 10;
        }

        return iCnt;
    }

    int calPower(int iDigit,int iPower)
    {
        int iRes = 1;

        for(int i = 1; i <= iPower; i++)
            iRes = iRes * iDigit;

        return iRes;
    }


    int calSum()
    {
        int iSum = 0;
        int iCnt = 0;
        int iTemp = 0;

        iTemp = this->iNo;
        iCnt = calLength();

        while(iTemp != 0)
        {
            iSum = iSum + calPower((iTemp % 10),iCnt);
            iTemp = iTemp / 10;
            iCnt--;
        }

        return iSum;
    }

    bool checkDisarium()
    {
        if(this->iNo == calSum())
            return true;
        else
            return false;
    }
};

int main()
{

    Numbers n(135);

    if(n.checkDisarium())
        cout<<"Disarium";
    else
        cout<<"Not Disarium";

    return 0;
}