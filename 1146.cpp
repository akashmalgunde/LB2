#include<iostream>
using namespace std;

class MyArray
{
    int iSize;
    int *iArr;

    public:

    MyArray(int iSize)
    {
        this->iSize = iSize;
        this->iArr = new int[iSize];
    }

    void accept()
    {
        cout<<"Enter Array elements:\n";

        for(int i = 0; i < this->iSize; i++)
            cin>>this->iArr[i];
    }

    void display()
    {
        cout<<"Entered array elements are:\n";

        for(int i = 0; i < this->iSize; i++)
            cout<<this->iArr[i]<<" ";
        
        cout<<"\n";

    }

    int findRepeated()
    {
        int iRet = -1;

        for(int i = 0; i < this->iSize - 1; i++)
        {
            for(int j = i + 1; j < this->iSize; j++)
            {
                if(this->iArr[i] == this->iArr[j])
                {
                    iRet = iArr[i];
                    return iRet;
                }
            }
        }

        return iRet;
    }
};

int main()
{
    MyArray m(7);

    m.accept();

    m.display();

    int iRet = 0;

    iRet = m.findRepeated();

    if(iRet != -1)
        cout<<iRet<<"\n";
    else
        cout<<"No repeated element is there in array\n";

    return 0;
}