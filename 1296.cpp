#include<iostream>
using namespace std;

class MyString
{
    private:

    char *str;

    public:

    MyString(char *s)
    {
        this->str = s;
    }

    int calLength()
    {
        int i = 0;
        while(this->str[i] != '\0')
        {
            i++;
        }

        return i;
    }

    bool checkUnique()
    {
        int iCnt = 0;
        int iLength = 0;
        bool bRet = true;

        iLength = calLength();

        for(int i = 0; i < iLength; i++)
        {
            iCnt = 0;
            for(int j = 0; j < iLength; j++)
            {
                if(this->str[i] == this->str[j])
                    iCnt++;
            }

           // cout<<this->str[i]<<" and its frequency : "<<iCnt<<"\n";
            if(iCnt > 1)
            {
                bRet = false;
                break;
            }
        }

        return bRet;
    }
};


int main()
{

    MyString m("abcdef");

    if(m.checkUnique())
        cout<<"Unique";
    else
        cout<<"Not Unique";

    return 0;
}