#include<iostream>
using namespace std;

int calSum(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    int iSum = 0;

    iCnt = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iCnt % 2 != 0)
            iSum = iSum + iDigit;
        iNo = iNo / 10;
        iCnt++;
    }

    return iSum;
}

int main()
{
    int iNo = 12345;

    cout<<calSum(iNo)<<"\n";

    return 0;
}