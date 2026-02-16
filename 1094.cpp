#include<iostream>
using namespace std;

class Numbers
{
    int iNo;

    public:

    Numbers(int i)
    {
        this->iNo = i;
    }

    int calculateSumDevisor()
    {
        int iTemp = 0;
        int iSum = 0;

        iTemp = this->iNo;

        for(int i = 1; i <= this->iNo / 2; i++)
        {
            if(iTemp % i == 0)
            {
                iSum = iSum + i;
            }
        }

        return iSum;
    }

    bool checkPerfect()
    {
        bool bRet = false;

        if(this->iNo == calculateSumDevisor())
        {
            bRet = true;
        }

        return bRet;
    }
};

int main()
{
    Numbers n(25);

    if(n.checkPerfect())
        cout<<"Perfect Number\n";
    else
        cout<<"Not Perfect Number\n";

    return 0;
}