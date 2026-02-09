#include<iostream>
using namespace std;

class Pattern
{
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

        iCnt1 = 1;
        iCnt2 = this->iRows*2 - 1;
        for(int i = 1; i <= this->iRows; i++,iCnt1++,iCnt2--)
        {
            for(int j = 1; j < this->iRows * 2; j++)
            {
                if(j == iCnt1 || j == iCnt2)
                    cout<<"* ";
                else
                    cout<<"  ";
            }

            cout<<"\n";
        }

        iCnt1 = 4;
        iCnt2 = 6;

        for(int i = 1; i < this->iRows; i++,iCnt1--,iCnt2++)
        {
            for(int j = 1; j < this->iRows * 2; j++)
            {
                if(j == iCnt1 || j == iCnt2)
                    cout<<"* ";
                else
                    cout<<"  ";
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