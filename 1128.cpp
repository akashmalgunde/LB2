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
        for(int i = 1; i <= this->iRows; i++)
        {
            for(int j = 1; j <= this->iRows; j++)
            {
                if(i % 2 == 0)
                {
                    if(j % 2 == 0)
                    {
                        cout<<"1 ";
                    }
                    else
                        cout<<"0 ";
                }
                else
                {
                    {
                    if(j % 2 == 0)
                    {
                        cout<<"0 ";
                    }
                    else
                        cout<<"1 ";
                }
                }
            }

            cout<<"\n";
        }
    }
};

int main()
{
    Pattern p(10);

    p.display();

    return 0;
}