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
        for(int i = this->iRows; i >= 1; i--)
        {
            for(int j = 1; j <= i; j++)
            {
                cout<<j<<" ";
            }

            cout<<"\n";
        }

        for(int i = 2; i <= this->iRows; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                cout<<j<<" ";
            }

            cout<<"\n";
        }
    }
};

int main()
{
    int iRows = 0;

    cout<<"Enter the number of rows:\n";
    cin>>iRows;

    Pattern p(iRows);

    p.display();

    return 0;
}