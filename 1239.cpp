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
        for(int i = 1; i <= this->iRows; i++)
        {
            for(int j = 1; j <= this->iRows; j++)
                if(j <= i)
                    cout<<"* ";
                else
                    cout<<"  ";

            for(int k = iRows; k >= 1; k--)
                if(k <= i)
                    cout<<"* ";
                else 
                    cout<<"  ";

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