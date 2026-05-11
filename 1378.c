#include<stdio.h>

void convert(char *cptr)
{
    int i = 0;

    while(cptr[i] != '\0')
    {
        if(cptr[i] >= 'a' && cptr[i] <= 'z')
            cptr[i] = cptr[i] - 32;

        i++;
    }
}

int main()
{
    char cptr[] = "HelloWorld";

    printf("%s\n",cptr);

    convert(cptr);

    printf("\n%s",cptr);

    return 0;
}