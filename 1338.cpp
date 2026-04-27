#include<iostream>
using namespace std;

void displayArray(int *iArr,int iSize)
{
    for(int i = 0; i < 5; i++)
        cout<<iArr[i]<<" ";

    cout<<"\n";
}

void rotateArray(int *iArr,int iSize)
{
    int iFirst = iArr[0];

    for(int i = 1; i < iSize; i++)
    {
        iArr[i - 1] = iArr[i];
    }

    iArr[iSize-1] = iFirst;

}

int main()
{
    int iArr[] = {1,2,3,4,5};

    cout<<"Before Rotating the array\n";

    displayArray(iArr,5);

    rotateArray(iArr,5);

    cout<<"After rotating array\n";
    
    displayArray(iArr,5);

    return 0;
}