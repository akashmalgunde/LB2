#include<iostream>
using namespace std;

int countK(int *iArr,int iSize,int iNo)
{
    int iCnt = 0;

    for(int i = 0; i < iSize; i++)
    {
        if(iArr[i] == iNo)
            iCnt++;
    }

    return iCnt;

}

int main()
{
    int iArr[] = {4, 7, 2, 9, 5,5,5,5,5,5};

    int iNo = 5;

    cout<<countK(iArr,10,iNo)<<"\n";

    return 0;
}