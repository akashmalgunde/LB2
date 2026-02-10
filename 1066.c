#include<stdio.h>

void findNum(int *iArr,int iSize,int *iFirst,int *iSesc)
{
    int iSum = 0;
    iSum = iArr[0] + iArr[1];
    *iFirst = iArr[0];
    *iSesc = iArr[1];

    for(int i = 0; i < iSize-1; i++)
    {
        for(int j = i + 1; j < iSize; j++)
        {
            if(iSum < iArr[i] + iArr[j])
            {
                iSum = iArr[i] + iArr[j];
                *iFirst = iArr[i];
                *iSesc = iArr[j];
            }
        }
    }
}

int main()
{

    int iArr[] = {25, 9, 3, 7};

    int iFirst = 0;
    int iSecond = 0;

    findNum(iArr,4,&iFirst,&iSecond);

    printf("%d ",iFirst);
    printf("%d\n",iSecond);

    return 0;
}