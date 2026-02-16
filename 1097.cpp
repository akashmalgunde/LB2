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

    int countLength()
    {
        int i = 0;

        while(this->str[i] != '\0')
        {
            i++;
        }

        return i;

    }
};

int main()
{
    char cArr[] = "HelloRamRamNamaste";

    MyString ms(cArr);

    cout<<ms.countLength()<<"\n";

    return 0;
}