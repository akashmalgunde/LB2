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
        int k = 0;
        k = this->iRows;

        for(int i = 1; i <= iRows; i++,k--)
        {
            for(int j = 1,iCnt = k; j <= i; j++,iCnt++)
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