#include<iostream>
using namespace std;


class Numbers
{


    public:

    int iNo;
    Numbers(int i)
    {
        this->iNo = i;
    }

    int calculateSquare()
    {
        return this->iNo * this->iNo;
    }

    int calculateCount()
    {
        int iTemp = 0;
        int iCnt = 0;

        iTemp = this->iNo;

        while(iTemp != 0)
        {
            iCnt++;
            iTemp = iTemp /10;
        }

        return iCnt;
    }

    int calculatePower(int iCnt)
    {
        int iPower = 1;

        for(int i = 1; i <= iCnt; i++)
            iPower = iPower * 10;

        return iPower;
    }
};

int main()
{
    Numbers n(25);

    if(n.iNo == n.calculateSquare() % n.calculatePower(n.calculateCount()))
        cout<<"Automorphic\n";
    else
        cout<<"Not Automorphic\n";

    return 0;
}