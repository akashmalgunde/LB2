#include<iostream>
using namespace std;

class MyString
{
    char *str;

    public:

    MyString(char *ms)
    {
        this->str = ms;
    }

    void removeSpace()
    {
        int i = 0;

        while(this->str[i] != '\0')
        {
            if(this->str[i] == 'r')
                this->str[i] = '_';
            i++;
        }
    }
};

int main()
{
    char *ms = new char[20];

    cin>>ms;

    MyString *m = new MyString(ms);

    cout<<ms<<"\n";
    
    m->removeSpace();

    cout<<ms<<"\n";

    return 0;
}