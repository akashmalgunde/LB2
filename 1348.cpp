#include<iostream>
using namespace std;

class Digits
{
    private:
    int iNo;

    public:

    Digits(int iNo)
    {
        this->iNo = iNo;
    }

    int calLength()
    {
        int iLen = 0;
        int iTemp = 0;

        iTemp = this->iNo; 

        while(iTemp != 0)
        {
            iLen++;
            iTemp = iTemp / 10;
        }
        return iLen;
    }

    int findLast()
    {
        int iLast = 0;

        iLast = this->iNo % 10;

        return iLast;
    }

    int calPower(int iCnt)
    {
        int iPower = 1;

        for(int i = 1; i <= iCnt; i++)
            iPower = iPower * 10;

        return iPower;
    }

   

    int findFirst()
    {
        int iLast = 0;

        iLast = this->iNo / calPower(calLength() - 1);

        return iLast;
    }

    int findCountFL()
    {
        int iCnt = 0;

        int iTemp = 0;
        int iDigit = 0;

        int iLast = 0;
        int iFirst = 0;

        iLast = findLast();
        iFirst = findFirst();

        cout<<"First : "<<findFirst()<<"\n";

        cout<<"Last :"<<findLast()<<"\n";

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;

            if((iDigit > iLast && iDigit < iFirst) || iDigit < iLast && iDigit > iFirst)
                iCnt++;

            iTemp = iTemp / 10;
        }

        return iCnt;
    }
};

int main()
{
    Digits d(692574);

    cout<<d.findCountFL()<<"\n";

    return 0;
}