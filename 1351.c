#include<stdio.h>

void printBinaryRep(int iNo)
{
    while(iNo != 0)
    {
        printf("%d",iNo%2);
        iNo = iNo / 2;
    }
}

int main()
{
    printBinaryRep(10);


    return 0;
}