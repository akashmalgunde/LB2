#include<iostream>
using namespace std;

class Pattern
{
    private:
    int iRows;


    public:

    Pattern(int iRows)
    {
        this->iRows = iRows;
    }

    void display()
    {
        int iCnt = 0;
        int iCnt1 = 0;

        iCnt = this->iRows;

        for(int i = 1; i <= this->iRows; i++,iCnt--)
        {
            iCnt1 = iCnt;

            for(int j = 1; j <= i; j++,iCnt1++)
            {
                cout<<iCnt1<<" ";
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