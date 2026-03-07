#include<iostream>
using namespace std;

class Numbers
{
    private:
    int iNo;

    public:
    Numbers(int iNo)
    {
        this->iNo = iNo;
    }

    void display()
    {
        for(int i = 1; i <= this->iNo; i++)
        {
            cout<<i<<" ";
        }
    }

    int getiNo()
    {
        return this->iNo;
    }
};

int main()
{
    Numbers n(5);

    n.display();

    cout<<n.getiNo()<<"\n";

    return 0;
}