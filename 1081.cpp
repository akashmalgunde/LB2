#include<iostream>
using namespace std;

class MyString
{
    char *str;

    public:
    MyString(char *ptr)
    {
        this->str = ptr;
    }

    int countLen()
    {
        int i = 0;

        while(this->str[i] != '\0')
        {
            i++;
        }

        return i;
    }

    bool checkPalindrome()
    {
        bool bRet = true;

        int iLength = 0;
        iLength = countLen();

        int i = 0;
        int j = iLength - 1;

        for(int iTer = 1; i <= iLength / 2; i++,j--)
        {
            if(this->str[i] != this->str[j])
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

    MyString *ms = new MyString("madam");

    if(ms->checkPalindrome())
        cout<<"palindrome\n";
    else
        cout<<"Not palindrome\n";

    return 0;
}