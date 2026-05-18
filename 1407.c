#include<stdio.h>
#include<stdbool.h>

bool checkPresent(int *iArr,int iSize,int iIndex)
{
    bool bRet = false;

    for(int i = 0; i < iIndex; i++)
    {
        if(iArr[i] == iArr[iIndex])
        {
            bRet = true;
            break;
        }
    }
    return bRet;
}


int countOccurance(int *iArr,int iSize,int iIndex)
{
    int iCnt = 0;

    for(int i = 0; i < iSize; i++)
    {
        if(iArr[i] == iArr[iIndex])
            iCnt++;
    }

    return iCnt;
}


void countFrequency(int *iArr,int iSize)
{
    int iCnt = 0;

    for(int i = 0; i < iSize; i++)
    {
        iCnt = 0;

        if(!checkPresent(iArr,iSize,i))
        {
           iCnt = countOccurance(iArr,iSize,i);
           printf("%d -> %d\n",iArr[i],iCnt);
        }
    }
}

int main()
{
    int iArr[] = {1,2,1,3,2,1};

    countFrequency(iArr,6);

    return 0;
}