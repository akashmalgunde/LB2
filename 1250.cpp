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
        int iCnt = 0;
        int iCnt1 = 0;

        iCnt = this->iRows;
        iCnt1 = this->iRows;

        for(int i = 1; i <= this->iRows; i++,iCnt--,iCnt1++)
        {
            for(int j = 1; j < this->iRows*2; j++)
            {
                if(j == iCnt || j == iCnt1)
                    cout<<"* ";
                else if(i == iRows)
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

    Pattern p(7);

    p.display();

    return 0;
}
