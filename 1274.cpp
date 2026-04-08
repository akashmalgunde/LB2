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
        int iCnt1 = 1;

        //iCnt = 1;

        for(int i = 1; i <= this->iRows; i++)
        {
            if(i % 2 != 0)
                iCnt = iCnt1;
            else
                iCnt = iCnt1 + i - 1;

            for(int j = 1; j <= i; j++,iCnt1++)
            {
                if(i % 2 != 0)
                    cout<<iCnt++<<" ";
                else
                {
                    //iCnt = iCnt + i;
                    cout<<iCnt--<<" ";
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