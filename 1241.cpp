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

    int calculateSquare(int iNo)
    {
        return iNo * iNo;
    }

    bool checkHappy()
    {
        int iTemp = 0;
        int iSquare = 0;
        
        iTemp = this->iNo;

        while(!(iTemp >= 0 && iTemp <= 9))
        {
            iSquare = 0;

            while(iTemp != 0)
            {
                iSquare = calculateSquare(iTemp % 10) + iSquare;
                iTemp = iTemp / 10;
            }

            iTemp = iSquare;
        }


        if(iTemp == 1)
            return true;

        else
            return false;
    }
};

int main()
{

    Numbers n(1965);

    if(n.checkHappy())
        cout<<"Happy Number\n";
    else
        cout<<"Not Happy number\n";

    return 0;
}