#include<iostream>
using namespace std;

int findLargerDig(int iNo)
{
    int iDigit = 0;
    int iMax = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
            iMax = iDigit;
        if(iDigit == 9)
            break;
        iNo = iNo / 10;
    }

    return iMax;
}

int main()
{


    int iNo = 57249;

    cout<<findLargerDig(iNo);

    return 0;
}