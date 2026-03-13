#include<iostream>
using namespace std;

int calculateSum(int *iArr,int iSize)
{
    int iSum = 0;

    for(int i = 0; i < iSize; i++)
    {
        if(iArr[i] % 2 == 0)
            iSum = iSum + iArr[i];
        
    }

    return iSum;
}

int main()
{
    int iArr[] = {2, 5, 8, 3, 6};

    cout<<calculateSum(iArr,5)<<"\n";

    return 0;
}