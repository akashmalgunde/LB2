#include<iostream>
using namespace std;

class Demo
{
    public:

    int A;
    int B;

    Demo(int c,int D)
    {
        this->A = c;
        this->B = D;
    }

    void display()
    {
        cout<<this->A<<" "<<this->B<<"\n";
    }

    //friend Demo operator+(Demo ,Demo );

};

Demo operator+(Demo ptr1,Demo ptr2)
    {
        return Demo(ptr1.A + ptr2.A,ptr2.B+ptr1.B);
    }

int main()
{
    Demo dRet(0,0);

    Demo ptr1(10,20);

    Demo ptr2(30,40);

    dRet = ptr1 + ptr2;

    dRet.display();


    return 0;
}