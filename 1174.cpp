#include<iostream>
using namespace std;

class MyString
{
    private:

    char* str;

    public:
    MyString(char *str)
    {
        this->str = str;
    }

    int countSpaces()
    {
        int iCnt = 0;

        int i = 0;

        while(this->str[i] != '\0')
        {
            if(this->str[i] == ' ')
                iCnt++;

            i++;
        }

        return iCnt;
    }
};

int main()
{
    MyString *ms = new MyString("C plus plus programming");

    cout<<ms->countSpaces();

    return 0;
}