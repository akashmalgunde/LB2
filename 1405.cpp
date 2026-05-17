#include<iostream>
using namespace std;

int findSecondLarge(int iNo)
{
    int iLarge = 0;
    int iDigit = 0;
    int iSecLarge = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit > iLarge)
        {
            iSecLarge = iLarge;
            iLarge = iDigit;
        }
        else if(iSecLarge < iDigit)
            iSecLarge = iDigit;

        iNo = iNo / 10;
    }

    return iSecLarge;
}

int main()
{

    printf("%d ",findSecondLarge(5832749));

    return 0;
}