#include<stdio.h>

int calLen(char *cArr)
{
    int i = 0; 

    while(cArr[i] != '\0')
    {
        i++;
    }

    return i;
}

void displayNonRepeating(char *cPtr)
{
    int iLen = 0;

    iLen = calLen(cPtr);

    for(int i = 0; i < iLen; i++)
    {
        for(int j = i + 1; j < iLen; j++)
        {
            if(cPtr[i] == cPtr[j])
            {
                printf("%c ",cPtr[i]);
                return;
            }
        }
    }
}

int main()
{
    char cArr[] = "engineering";

    displayNonRepeating(cArr);

    return 0;
}