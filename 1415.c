#include<stdio.h>

int displayDivisor(int iNo)
{
    int iRet = 0;

    for(int i = 1; i <= iNo / 2; i++)
    {
        if(iNo % i == 0)
        {
            iRet = iRet + i;
        }
    }

    return iRet;
    //printf("\n");
}

int main()
{
    printf("%d\n",displayDivisor(64));

    return 0;
}