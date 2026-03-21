#include<stdio.h>
#include<stdbool.h>

bool checkGreater(int *iArr,int iSize,int iPos)
{
    bool bRet = true;

    for(int i = iPos+1; i < iSize; i++)
    {
        if(iArr[iPos] < iArr[i])
        {
            bRet = false;
            break;
        }
    }

    return bRet;
}

void displayLeader(int *iArr,int iSize)
{
    //bool bRet = false;

    for(int i = 0; i < iSize; i++)
    {
        if(checkGreater(iArr,iSize,i))
            printf("%d ",iArr[i]);

    }

    printf("\n");
}

int main()
{
    int iArr[] = {16, 17, 4, 3, 5, 2};

    displayLeader(iArr,6);


    return 0;
}