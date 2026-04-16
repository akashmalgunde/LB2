#include<stdio.h>
#include<stdbool.h>

int calLength(char *cArr)
{
    int i = 0;
    while(cArr[i] != '\0')
    {
        i++;
    }
    return i;
}

bool checkPresent(char *cArr,int iCnt)
{
    int iLen = calLength(cArr);
    bool bRet = false;

    for(int i = 0; i < iCnt; i++)
    {
        if(cArr[i] == cArr[iCnt])
        {
            bRet = true;
            break;
        }
    }
    return bRet;
}

int calFreq(char* cArr,char ch)
{
    int iLen = 0;
    int iCnt = 0;

    iLen = calLength(cArr);

    for(int i = 0; i < iLen; i++)
    {
        if(cArr[i] == ch)
            iCnt++;

    }
    return iCnt;
}

void displayNonRepeat(char *cArr)
{
    int iLen = calLength(cArr);

    for(int i = 0; i < iLen; i++)
    {
        if(calFreq(cArr,cArr[i]) == 1)
        {
            printf("%c ",cArr[i]);
            return;
        }
    }
}

int main()
{
    char cArr[] = "stress";

    displayNonRepeat(cArr);

    return 0;
}