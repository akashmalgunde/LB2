#include<stdio.h>

int findMax(int iNo)
{
    int iMax = 0;

    while(iNo != 0)
    {
        if(iMax < (iNo % 10))
            iMax = iNo % 10;
        
        if(iMax== 9)
            break;

        iNo = iNo / 10;

        
    }

    return iMax;
}

int main()
{

    printf("%d ",findMax(583274));

    return 0;
}