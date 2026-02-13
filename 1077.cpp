#include<iostream>
using namespace std;


class Pattern
{
    int iRows;

    public:
    Pattern(int iNo)
    {
        this->iRows = iNo;
    }

    void display()
    {
        char ch = '\0';
        for(int i = 1; i <= this->iRows; i++)
        {
            ch = 'A';
            for(int j = 1; j <= i; j++)
            {
                cout<<ch++<<" ";
            }

            cout<<"\n";
        }

        for(int i = this->iRows-1; i >= 1; i--)
        {
            ch = 'A';
            for(int j = 1; j <= i; j++)
            {
                cout<<ch++<<" ";
            }
            cout<<'\n';
        }
    }
};

int main()
{
    Pattern p(5);

    p.display();

    return 0;
}