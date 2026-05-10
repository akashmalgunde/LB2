#include<iostream>
using namespace std;

int calSum(int iNo)
{
    int iSum = 0;

    while(iNo != 0)
    {
        if((iNo % 10) % 2 != 0)
            iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
    }

    return iSum;
}

int main()
{
    int iNo = 583274;

    cout<<calSum(iNo)<<"\n";

    return 0;
}