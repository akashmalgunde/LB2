#include<stdio.h>
#define bool int
#define true 1
#define false 0

int calculateReverse(int iNo)
{
    int iRev = 0;

    while(iNo != 0)
    {
        iRev = iRev * 10 + (iNo % 10);
        iNo = iNo / 10;
    }

    return iRev;
}

bool checkPalindrome(int iNo)
{
    bool bRet = false;

    if(iNo == calculateReverse(iNo))
    {
        bRet =true;
    }

    return bRet;
}


int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    if(checkPalindrome(iNo))
        printf("Number is palindrome\n");
    else
        printf("Number is not palindrome\n");


    return 0;
}