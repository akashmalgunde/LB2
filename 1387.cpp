#include<iostream>
using namespace std;

void display(int iRows)
{
    char ch = '\0';
    ch = 'E';

    char ch1 = '\0';

    for(int i = 1; i <= iRows; i++,ch--)
    {
        ch1 = ch;
        for(int j = 1; j <= i; j++,ch1++)
        {
            cout<<ch1<<" ";
        }

        cout<<"\n";
    }
}

int main()
{
    display(5);

    return 0;
}