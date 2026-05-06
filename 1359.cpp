#include<iostream>
using namespace std;

void display(int iNo)
{
    while(iNo != 0)
    {
        cout<<iNo % 10<<" ";
        iNo = iNo / 10;
    }
}

int main()
{
    display(583274);
    
    return 0;
}