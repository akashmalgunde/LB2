#include<iostream>
using namespace std;

class MyString
{

    private:
    char* str;

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

    void printNonRepeat()
    {
        int iCnt = calLength();

        for(int i = 0; i < iCnt; i++)
        {
            for(int j = i + 1; j < iCnt; j++)
            {
                if(this->str[i] == this->str[j])
                {
                    cout<<this->str[i]<<"\n";
                    return;
                }
            }
        }
    }
};

int main()
{

    MyString ms("programming");

    ms.printNonRepeat();

    return 0;
}