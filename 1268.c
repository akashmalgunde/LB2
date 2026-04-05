#include<stdio.h>
#include<stdbool.h>

bool checkSorted(int *iArr,int iSize)
{
    bool bRet = true;

    for(int i = 1; i < iSize-1; i++)
    {
        if(!(iArr[i] > iArr[i - 1] && iArr[i] < iArr[i + 1]))
            bRet = false;
    }

    return bRet;
}

int main()
{
    int iArr[5] = {1,2,30,4,5};

    if(checkSorted(iArr,5))
        printf("sorted\n");
    else
        printf("unsorted\n");

    return 0;
}