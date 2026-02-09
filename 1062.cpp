#include<iostream>
using namespace std;

class MyString
{
    char *cstr;

    public:
    MyString()
    {
        cstr = new char[25];
    }

    void accept()
    {
        cin>>this->cstr;
    }

    void toUpper()
    {
        //cout<<"Inside upper converter\n";
        int i = 0;
        while(this->cstr[i] != '\0')
        {
            if(cstr[i] >= 'a' && cstr[i] <= 'z')
            {
                cstr[i] = cstr[i] - 32;
            }
            i++;
        }
        //cout<<"Outside the upper convrter\n";
    }

    void display()
    {
        cout<<"Coming inside the display\n";
        cout<<this->cstr<<"\n";
    }
};

int main()
{
    MyString ms;
    ms.accept();

    ms.display();

    ms.toUpper();

    ms.display();


    return 0;
}

