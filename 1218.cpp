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
        for(int i = 1; i <= this->iRows; i++ )
        {
            iCnt = 1;
            for(int j = 1; j <= i; j++,iCnt+=2)
            {
                cout<<iCnt<<" ";
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