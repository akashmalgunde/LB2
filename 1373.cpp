#include<iostream>
using namespace std;

bool checkOnlyDigit(char *str)
{
    bool bRet = true;
    int i = 0;

    while(str[i] != '\0')
    {
        if(!(str[i] >= '0' && str[i] <= '9'))
        {
            bRet = false;
            break;
        }
        i++;
    }

    return bRet;
}

int main()
{
    char str[] = "1234gs";

    if(checkOnlyDigit(str))
        cout<<"Yes";
    else
        cout<<"No";

    return 0;
}