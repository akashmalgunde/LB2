#include<iostream>
using namespace std;

void display(int iRows)
{
    for(int i = iRows; i >= 1; i--)
    {
        for(int j = iRows; j >= i; j--)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    display(5);

    return 0;
}