#include<stdio.h>

void toggle(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        else
            str[i] = str[i] + 32;
        i++;
    }
}

int main()
{
    char cArr[] = "HeLLO";

    printf("%s\n",cArr);

    toggle(cArr);

    printf("%s\n",cArr);

    return 0;
}