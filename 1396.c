#include<stdio.h>
#include<stdbool.h>

int calFact(int iNo)
{
    int iFact = 1;

    for(int i = 1; i <= iNo; i++)
    {
        iFact = iFact * i;
    }

    return iFact;
}

int calSum(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + calFact(iDigit);
        iNo = iNo / 10;
    }

    return iSum;
}

bool checkKrishnamurthy(int iNo)
{
    bool bRet = false;

    if(calSum(iNo) == iNo)
        bRet = true;

    return bRet;
}

int main()
{
    if(checkKrishnamurthy(145))
        printf("%d is is Krishnamurthy",145) ;
    else
        printf("%d is is not Krishnamurthy",145) ;

    return 0;
}