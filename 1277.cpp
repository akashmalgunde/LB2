#include<iostream>
using namespace std;

int rev(int iNo)
{
    int iRev = 0;

    while(iNo != 0)
    {
        iRev = iRev * 10 + (iNo % 10);
        iNo = iNo / 10;
    }

    return iRev;
}

bool checkPal(int iNo)
{
    if(iNo == rev(iNo))
        return true;
    else
        return false;
}

int main()
{
    int iNo = 1212;

    if(checkPal(iNo))
        cout<<"pal\n";
    else
        cout<<"not pal\n";

    return 0;
}