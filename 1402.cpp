#include<iostream>
using namespace std;

class MyString
{
    private:

    char *str;

    public:

    MyString(char *str)
    {
        this->str = str;
    }

    int countWords()
    {
        int iCnt = 0;

        int i = 0;

        while(this->str[i] != '\0')
        {
            if(this->str[i] == ' ')
                iCnt++;

            i++;
        }

        return ++iCnt;
    }
};

int main()
{

    MyString ms("I love Java programming");

    cout<<ms.countWords()<<"\n";
    
    return 0;
}