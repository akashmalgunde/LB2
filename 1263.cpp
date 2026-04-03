#include<iostream>
using namespace std;

int findSecLarger(int *iArr,int iSize)
{
    int iMax = iArr[0];
    int iSecMax = 0;
    for(int i = 1; i < iSize; i++)
    {
        if(iArr[i] > iMax)
        {
            iSecMax = iMax;
            iMax = iArr[i];
        }
        else if(iSecMax < iArr[i])
            iSecMax = iArr[i];

    }

    return iSecMax;
}

int main()
{
    int iArr[] = {-8, -3, -5, -1, -9};

    cout<<findSecLarger(iArr,5);

    return 0;
}