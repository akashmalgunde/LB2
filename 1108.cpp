#include<iostream>
using namespace std;

class Pattern
{
    int iRows;

    public:
    Pattern(int iRows)
    {
        this->iRows = iRows;
    }

    void display()
    {
        int iCnt1 = 1;
        int iCnt2 = this->iRows*2-1;
        int iPrint1 = 1;
        int iPrint2 = this->iRows;

        for(int i = 1; i <= this->iRows; i++,iPrint1++,iPrint2--,iCnt1++,iCnt2--)
        {
            for(int j = 1; j < this->iRows*2 ; j++)
            {
                if(j == iCnt1)
                {
                    cout<<iPrint1<<" ";
                }
                else if(j == iCnt2)
                {
                    cout<<iPrint2<<" ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            cout<<"\n";
        }

        iCnt1 -= 2;
        iCnt2 += 2;

        iPrint1 -= 2;
        iPrint2 += 2;

        for(int i = this->iRows-1; i >= 1; i--,iCnt1--,iCnt2++,iPrint1--,iPrint2++)
        {
            for(int j = 1; j < this->iRows*2; j++)
            {
                if(j == iCnt1)
                {
                    cout<<iPrint1<<" ";
                }
                else if(j == iCnt2)
                {
                    cout<<iPrint2<<" ";
                }
                else
                {
                    cout<<"  ";
                }
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