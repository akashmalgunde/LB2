#include<iostream>
using namespace std;

int findSecLarge(int *iArr,int iSize)
{
    int iMin = 0;
    int iSecMin = 0;

    iMin = iArr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(iArr[i] < iMin)
        {
            iSecMin = iMin;
            iMin = iArr[i];
        }
        else if(iArr[i] < iSecMin && iArr[i] > iMin)
            iSecMin = iArr[i];
    }

    return iSecMin;
}

int main()
{

    int iArr[] = {12, 5, 7, 2, 18};

    cout<<findSecLarge(iArr,5)<<"\n";


    return 0;
}