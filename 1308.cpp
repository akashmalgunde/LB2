#include<iostream>
using namespace std;

int calSum(int *iArr,int iSize)
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
    int iArr[] = {1,2,4,5};

    int iSize = 4;

    int n = iSize + 1;

    int iExpectedSum = n * (n + 1) / 2;

    int iActualSum = calSum(iArr,iSize);

    int iMissingNum = iExpectedSum - iActualSum;

    cout<<iMissingNum<<"\n";

    return 0;
}