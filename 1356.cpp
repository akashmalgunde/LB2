#include<iostream>
using namespace std;

int countUpperCase(char *str)
{
    int iCount = 0;

    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            iCount++;
        i++;
 
    }

    return iCount;
}

int main()
{

    cout<<countUpperCase("HelloWorld");

    return 0;
}