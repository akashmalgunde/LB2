#include<iostream>
using namespace std;

int calLen(char *cArr)
{
    int i = 0;

    while(cArr[i] != '\0')
    {
        i++;
    }

    return i;
}

char* removeSpace(char *cArr)
{
    int iLen = calLen(cArr);

    char *cptr = (char*)malloc(sizeof(char)*iLen);

    int i = 0;
    int j = 0;
    
    for(i = 0, j = 0; i < iLen; i++)
    {
        if(cArr[i] != ' ')
            cptr[j++] = cArr[i];
    }

    cptr[j] = '\0';

    return cptr;

    
}


int main()
{

    char cArr[] = "i love programming";

    char *cRet = removeSpace(cArr);

    cout<<cRet<<"\n";



    return 0;
}