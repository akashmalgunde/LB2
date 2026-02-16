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

    int getRows()
    {
        return this->iRows;
    }

    void setRows(int i)
    {
        this->iRows = i;
    }

    void display()
    {
        for(int i = iRows; i >= 1; i--)
        {
            for(int j = 1; j <= iRows; j++)
            {
                if(j >= i)
                    cout<<"* ";
                else
                    cout<<"  ";
            }
            cout<<"\n";
        }

        for(int i = 1; i < this->iRows; i++)
        {
            for(int j = 1; j <= this->iRows; j++)
            {
                if(j > i)
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

    Pattern *pobj = new Pattern(5);

    pobj->display();

    return 0;
}