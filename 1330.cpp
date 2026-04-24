#include<iostream>
using namespace std;

int calSumDivisor(int iNo)
{
    int iSum = 0;

    for(int i = 1; i <= iNo /2; i++)
    {
        if(iNo % i == 0)
            iSum = iSum + i;
    }

    return iSum;
}

bool checkAbundant(int iNo)
{
    bool bRet = false;

    if(calSumDivisor(iNo) > iNo)
        bRet = true;
    
    return bRet;
}

int main()
{
    int iNo = 0;

    cout<<"Enter the numbher:";
    cin>>iNo;

    if(checkAbundant(iNo))
        cout<<"Abundant number\n";
    else
        cout<<"Not an Abundant number\n";

    return 0;
}