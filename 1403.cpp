#include<iostream>
using namespace std;



int countElement(int *iArr,int iSize,int iIndex)
{
    int iCnt = 0;

    for(int i = iIndex + 1; i < iSize; i++)
    {
        if(iArr[iIndex] == iArr[i])
            iCnt++;
    }

    return iCnt;
}

void displayDuplicate(int *iArr,int iSize)
{

    for(int i = 0; i < iSize; i++)
    {
        if(countElement(iArr,iSize,i) > 0)
            cout<<iArr[i]<<" ";
    }

    cout<<"\n";
}

int main()
{

    int iArr[] = {1,2,3,2,4,1,5};

    displayDuplicate(iArr,7);


    return 0;
}