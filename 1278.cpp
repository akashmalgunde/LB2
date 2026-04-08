#include<iostream>
using namespace std;

bool checkPrime(int iNo)
{
    bool bRet = true;

    for(int i = 2; i <= iNo /2; i++)
    {
        if(iNo % i == 0)
        {
            bRet = false;
            break;
        }
    }

    return bRet;
}

int calSum(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(checkPrime(iDigit))
            iSum = iSum + iDigit;
        iNo = iNo / 10;
    }

    return iSum;
}

int main()
{
    int iNo = 572349;

    cout<<calSum(iNo)<<"\n";

    return 0;
}