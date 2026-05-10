#include<iostream>
using namespace std;

void displayCount(int *iArr,int iSize)
{
    int iEvenCount = 0;
    int iOddCount = 0;

    for(int i = 0; i < iSize; i++)
    {
        if(iArr[i] % 2 != 0)
            iOddCount++;
        else
            iEvenCount++;
    }

    cout<<"Even count:"<<iEvenCount<<"\n";
    cout<<"Odd count:"<<iOddCount<<"\n";
}

int main()
{

    int iArr[] = {2,5,7,8,10};

    displayCount(iArr,5);

    return 0;
}