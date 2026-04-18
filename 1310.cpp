#include<iostream>
using namespace std;

int findSmall(int iNo)
{
    int iSmall = 0;
    iSmall = 9;
    
    while(iNo != 0)
    {
        if((iNo % 10) < iSmall)
            iSmall = (iNo % 10);

        iNo = iNo / 10;
    }
    return iSmall;
}


int main()
{

    int iNo = 156552;

    cout<<findSmall(iNo)<<"\n";

    return 0;
}