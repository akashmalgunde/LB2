#include<iostream>
using namespace std;

int calSum(int iNo)
{
    int iSum = 0;

    while(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
    }

    return iSum;
}

bool checkHarshad(int iNo)
{
    bool bRet = false;

    if(iNo % calSum(iNo) == 0)
        bRet = true;

    return bRet;
}

int main()
{
    if(checkHarshad(27))
        cout<<"Harshad\n";
    else
        cout<<"Not Harshad\n";

    return 0;
}