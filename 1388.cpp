#include<iostream>
using namespace std;

int calProduct(int iNo)
{
    int iRet = 1;

    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit != 0)
            iRet = iRet * iDigit;

        iNo = iNo / 10;
    }

    return iRet;
}


int main()
{

    cout<<calProduct(503204)<<"\n";

    return 0;
}