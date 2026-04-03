#include<iostream>
using namespace std;

int calFact(int iNo)
{
    int iFact = 1;

    for(int i = 2; i <= iNo; i++)
    {
        iFact = iFact * i;
    }

    return iFact;
}


int calSum(int iNo)
{
    int iSum = 0;

    while(iNo != 0)
    {
        iSum = iSum + calFact(iNo % 10);
        iNo = iNo / 10;
    }

    return iSum;
}

bool checkStrong(int iNo)
{
    bool bRet = false;

    if(calSum(iNo) == iNo)
        bRet = true;

    return bRet;
}

int main()
{

    if(checkStrong(145))
        cout<<"Strong";
    else
        cout<<" Not Strong";

    return 0;
}