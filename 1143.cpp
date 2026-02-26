#include<iostream>
using namespace std;

class MyString 
{
    char *str;

    public:

    MyString(char *s)
    {
        this->str = s;
    }

    int countWords()
    {
        int i = 0;
        int iCnt = 0;

        while(this->str[i] != '\0')
        {
            if(this->str[i] != ' ')
                iCnt++;
            i++;
        }

        return iCnt;
    }
};

int main()
{
    MyString *ms = new MyString("Hello world from C++");

    cout<<ms->countWords();

    return 0;
}