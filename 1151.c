#include<stdio.h>

int main()
{
    int iArr[] = {2, 3, 10, 6, 4, 8, 1};

    int iSum = iArr[1] - iArr[0];
    for(int i = 0; i < 6-1; i++)
    {
        for(int j = i + 1; j < 6; j++)
        {
            if(iArr[i] < iArr[j])
            {
                if(iSum < iArr[j] - iArr[i])
                    iSum = iArr[j] - iArr[i];
            }
        }
    }

    printf("%d\n",iSum);

    return 0;
}