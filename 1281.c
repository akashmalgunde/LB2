#include<stdio.h>

int findDup(int *iArr,int iSize)
{

    int iRet = -1;

    for(int i = 0; i < iSize; i++)
    {
        for(int j = i + 1; j < iSize; j++)
        {
            //printf("%d == %d\n",iArr[i],iArr[j]);
            if(iArr[i] == iArr[j])
            {
                iRet = iArr[i];
                return iRet;
            }
        }
    }

    return iRet;

}

int main()
{
    int iArr[] = {1, 3, 4, 2, 5, 3, 2};

    int iRet = 0;

    iRet = findDup(iArr,7);

    printf("%d ",iRet);

    return 0;
}