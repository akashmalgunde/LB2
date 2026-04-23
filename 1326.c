#include<stdio.h>

void displayMajority(int *iArr,int iSize)
{
    int iCnt = 0;
    for(int i = 0; i < iSize; i++)
    {
        for(int j = 0; j < iSize; j++)
        {
            if(iArr[i] == iArr[j])
                iCnt++;
        }

        if(iCnt > iSize / 2)
            printf("%d ",iArr[i]);
            break;
    }
}

int main()
{
    int iArr[] = {2,2,1,2,3,2,2};

    displayMajority(iArr,7);

    return 0;
}