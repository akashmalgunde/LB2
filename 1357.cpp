#include<iostream>
using namespace std;

int calculateSum(int *iArr,int iSize)
{
    int iSum = 0;

    for(int i = 0; i < iSize; i++)
    {
        iSum = iSum + iArr[i];
    }

    return iSum;
}

int main()
{
    int iArr[] = {1,2,3,4,5};

    cout<<calculateSum(iArr,5)<<"\n";

    return 0;
}