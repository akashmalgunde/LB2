#include<iostream>
using namespace std;

void intersection(int *iArr1,int iSize1,int *iArr2,int iSize2)
{
    for(int i = 0; i < iSize1; i++)
    {
        for(int j = 0; j < iSize2; j++)
        {
            if(iArr1[i] == iArr2[j])
                cout<<iArr1[i]<<" ";
        }
    }
}


int main()
{
    int iArr1[] = {1,2,3,4};
    int iArr2[] = {3,4,5,6};

    intersection(iArr1,4,iArr2,4);

    return 0;
}