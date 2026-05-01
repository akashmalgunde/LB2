#include<stdio.h>
#define bool int
#define false 0
#define true 1

bool checkOdium(int iNo)
{
    int iCnt = 0;
    bool bRet = false;
    while(iNo != 0)
    {
        if((iNo % 2) == 1)
            iCnt++;

       // printf("%d ",iNo%2);
        
        iNo = iNo / 2;
    }

    //printf("%d is count of 1\n",iCnt);

    if(iCnt % 2 != 0)
        bRet = true;

    return bRet;
}

int main()
{
    if(checkOdium(3))
        printf("Odium\n");
    else
        printf("Not an Odium\n");
}