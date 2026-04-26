#include<stdio.h>
#include<stdbool.h>

bool checkPronic(int iNo)
{
    bool bRet = false;
    
    int i = 1;
    int iMult = 0;

    while(iMult < iNo)
    {
        iMult = i * (i+1);
        i++;
    }

    if(iMult == iNo)
        bRet = true;

    return bRet;
}

int main()
{
    int iNo = 0;

    printf("Enter the number\n");
    scanf("%d",&iNo);

    if(checkPronic(iNo))
        printf("Pronic\n");
    else
        printf("Not Pronic\n");

    return 0;
}