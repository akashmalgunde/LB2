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

    int calculateLength(int iNo)
    {
        int iCnt = 0;

        while(iNo != 0)
        {
            iCnt++;
            iNo = iNo / 10;
        }

        return iCnt;
    }

    int calculatePower(int iCnt)
    {
        int iPower = 1;

        for(int i = 1; i <= iCnt; i++)
        {
            iPower = iPower * 10;
        }

        return iPower;
    }

    bool checkFascinatingNumber()
    {
        int n = this->iNo;

        int n2 = this->iNo * 2;

        int n3 = this->iNo * 3;

        //cout<<"n :"<<n<<" n2 : "<<n2<<"n3 : "<<n3<<"\n";
        int iTemp = 0;

        iTemp = n * calculatePower(calculateLength(n2)) + n2 ;
        //cout<<"iTemp :"<<iTemp;
        iTemp = iTemp * calculatePower(calculateLength(n3)) + n3;
        //cout<<"Complete number: "<<iTemp<<"\n";

        bool bRet = true;
        int iTemp1 = 0;
        int iCnt = 0;
        for(int i = 1; i <= 9; i++)
        {
            iTemp1 = iTemp;
            iCnt = 0;
            while(iTemp1 != 0)
            {
                if(iTemp1 % 10 == i)
                    iCnt++;
                iTemp1 = iTemp1 / 10;
            }

            if(iCnt != 1)
            {
                bRet = false;
                break;
            }
        }

        return bRet;
    }
};

int main()
{

    Numbers n(100);

    if(n.checkFascinatingNumber())
        cout<<"Fascinating number\n";
    else
        cout<<"Not Fascinating number\n";


    return 0;
}