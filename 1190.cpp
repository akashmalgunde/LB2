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

    int countDigits()
    {
        int iCnt = 0;
        int i = 0;

        while(this->str[i] != '\0')
        {
            if(this->str[i] >= '0' && this->str[i] <= '9')
                iCnt++;
            i++;
        }

        return iCnt;
    }
};

int main()
{
    MyString ms("Java123Code45");

    cout<<ms.countDigits()<<"\n";

    return 0;
}