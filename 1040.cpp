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
        char ch = '\0';
        ch = 'A';
        for(int i = 1; i <= this->iRows; i++)
        {
            for(int j = 1; j <= i; j++,ch++)
            {
                cout<<ch<<" ";
            }

            cout<<"\n";
        }
    }
};

int main()
{
    int iRows = 0;

    cout<<"enter the number of rows:\n";
    cin>>iRows;

    Pattern pob(iRows);

    pob.display();

    return 0;
}