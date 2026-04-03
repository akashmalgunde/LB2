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

    bool checkAtLeft(char *str,int k)
    {
        bool bRet = false;

        for(int i = 0; i < k; i++)
        {
            if(str[i] == str[k])
            {
                bRet = true;
                break;
            }
        }

        return bRet;
    }

    void removeDup()
    {
        int i = 0;
        bool bRet = false;

        while(this->str[i] != '\0')
        {
            if(!(checkAtLeft(this->str,i)))
                cout<<str[i];
            i++;
        }
    }
};

int main()
{
    MyString m("programming");

    m.removeDup();

    return 0;
}