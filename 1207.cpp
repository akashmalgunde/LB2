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

    int calculateSumDivisor()
    {
        int iSum = 0;

        for(int i = 1; i <= this->iNo/2; i++)
        {
            if(this->iNo % i == 0)
                iSum = iSum + i;
            
        }

        return iSum;
    }

    bool checkPerfect()
    {
        bool bRet = false;

        if(this->iNo == calculateSumDivisor())
            bRet = true;

        return bRet;
    }
};

int main()
{

    Numbers n(2);

    if(n.checkPerfect())
        cout<<"Perfect number\n";
    else
        cout<<"Not Perfect\n";

    return 0;
}