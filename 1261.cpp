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
        char ch = '\0';
        for(int i = 1,ch = 'A'; i <= this->iRows; i++,ch++)
        {
            for(int j = 1; j <= i; j++)
            {
                cout<<(char)ch<<" ";
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