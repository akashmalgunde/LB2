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
        for(int i = 1; i <= this->iRows; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                cout<<"* ";
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