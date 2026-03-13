#include<iostream>
using namespace std;

class MyString
{
    private:
     char *cptr;

     public:
     MyString(char *ptr)
     {
        this->cptr = ptr;
     }

     int countVowel()
     {
        int iCnt = 0;

        int i = 0;

        while(this->cptr[i] != '\0')
        {
            if(this->cptr[i] == 'a' || this->cptr[i] == 'e' || this->cptr[i] == 'i' || this->cptr[i] == 'o' || this->cptr[i] == 'u' || this->cptr[i] == 'A' || this->cptr[i] == 'E' || this->cptr[i] == 'I' || this->cptr[i] == 'O' || this->cptr[i] == 'U')
                iCnt++;
            i++;
        }

        return iCnt;
     }


};

int main()
{
    MyString *m = new MyString("Education");

    cout<<"Vowel count"<<m->countVowel()<<"\n";

    return 0;
}