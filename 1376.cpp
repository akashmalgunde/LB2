#include<iostream>
using namespace std;

bool checkPerfectSqure(int iNo)
{
    int i = 0;
    int iSquare = 0;
    bool bRet = false;


    i = 1;

    while(iSquare < iNo)
    {
        iSquare = i * i;
        i++;
    }

    if(iSquare == iNo)
        bRet = true;

    return bRet;
}

int main()
{
    if(checkPerfectSqure(15))
        cout<<"Perfect square\n";
    else
        cout<<"Not Perfect square\n";

    return 0;
}