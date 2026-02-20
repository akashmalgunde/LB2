#include<stdio.h>

void perform(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = '*';
        i++;
    }
}

int main()
{
    char str[] = "ProGraming";

    printf("%s\n",str);

    perform(str);

    printf("%s\n",str);

    return 0;
}