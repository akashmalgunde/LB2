#include<stdio.h>
#include<stdlib.h>
void convertUpper(char *str)
{
    int i = 0; 

    while(str[i] != '\0')
    {
         
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        i++;
    }
}

int main()
{
    char *str = NULL;
    char ch = '\0';

    printf("Enter the string:\n");

    str = (char*)malloc(sizeof(char)*25);

    int i = 0;
    scanf("%c",&ch);

    while(ch != '\n' && i < 24)
    {
        str[i] = ch;

        scanf("%c",&ch);
        i++;
    }
    str[i] = '\0';

   // fgets(str,25,stdin);

    printf("%s\n",str);
    convertUpper(str);
    printf("%s\n",str);

    char a = 'a';
    char A = 'A';
    //printf("%d\n",a);
    //printf("%d\n",A);

    //printf("%d\n",a-A);

    return 0;
}