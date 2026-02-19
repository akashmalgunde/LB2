#include<iostream>
using namespace std;

class MyString 
{
    public:
    char *str;

    public:

    MyString(const char *str1)
    {
        this->str = (char*)str1;
    }

    void replaceVowels()
    {
        int i = 0;

        while(this->str[i] != '\0')
        {
            if(this->str[i] == 'a' || this->str[i] == 'e' || this->str[i] == 'i' || this->str[i] == 'o' || this->str[i] == 'u' || this->str[i] == 'A' || this->str[i] == 'E' || this->str[i] == 'I' || this->str[i] == 'O' || this->str[i] == 'U')
                this->str[i] = '*';
            i++;
        }
    }
};

int main()
{

    MyString ms("Hello world");

    char str[] = "Hello world";

    cout<<str<<"\n";
    int i = 0;

        while(str[i] != '\0')
        {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                str[i] = '*';
            i++;
        }
    cout<<str<<"\n";
    return 0;
}