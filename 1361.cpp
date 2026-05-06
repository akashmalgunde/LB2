#include<iostream>
using namespace std;

void display(int iNo)
{
    int iRet = 0;
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
       if(iDigit %2 == 0)
            iRet = iRet + iDigit;
        iNo = iNo / 10;
    }

    cout<<iRet<<" is the sum of even digits\n";
}

int main()
{
    display(583274);
    
    return 0;
}