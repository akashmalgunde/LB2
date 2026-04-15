#include<iostream>
using namespace std;

class Pattern
{
    private:
    int iRows;


    public:

    Pattern(int i)
    {
        this->iRows = i;
    }

    void display()
    {
        int iCnt1 = 0;
        int iCnt2 = 0;

        iCnt1 = 0;
        for(int i = 1; i <= this->iRows; i++)
        {

            if(i % 2 != 0)
            {
                iCnt2 = i + iCnt1;
            }
            else
                iCnt2 = iCnt1 + 1;
    

            for(int j = 1; j <= i; j++,iCnt1++)
            {
                if(i % 2 == 0)
                    cout<<iCnt2++<<" ";
                else
                    cout<<iCnt2--<<" ";
            }

            cout<<"\n";
        }
    }

};

int main()
{

    Pattern p(5);

    p.display();

    return 0;
}