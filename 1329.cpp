#include<iostream>
using namespace std;

int findMax(int *iArr,int iSize)
{
    int iMax = 0;
    int iSecMax = 0;

    iMax = iArr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(iArr[i] > iMax)
        {
            iSecMax = iMax;
            iMax = iArr[i];
        }
        else if(iMax > iArr[i] && iSecMax < iArr[i])
            iSecMax = iArr[i];

    }

    return iSecMax;
}

int main()
{

    int iArr[] = {10, 5, 20, 8, 15};

    cout<<findMax(iArr,5);

    return 0;
}