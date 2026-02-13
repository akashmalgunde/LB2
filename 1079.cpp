#include<iostream>
using namespace std;

class MyArray
{
    int iSize;
    int *iArr;


    public:

    MyArray(int i)
    {
        this->iSize = i;
        this->iArr = new int[iSize];
    }

    void accept()
    {
        cout<<"Enter the array elements:\n";

        for(int i = 0; i < this->iSize; i++)
        {
            cin>>this->iArr[i];
        }
    }

    void display()
    {
        cout<<"Entered array elements are:\n";

        for(int i = 0; i < this->iSize; i++)
        {
            cout<<this->iArr[i]<<" ";
        }
        cout<<"\n";
    }

    int findFirstNonRepeating()
    {
        int iElement = -1;

        for(int i = 0; i < this->iSize-2; i++)
        {
            for(int j = i + 1; j < this->iSize; j++)
            {
                if(this->iArr[i] == this->iArr[j])
                {
                    iElement = this->iArr[i];
                    return iElement;
                }
            }
        }

        return iElement;
    }
};

int main()
{

    MyArray ma(5);

    ma.accept();

    ma.display();

    if(ma.findFirstNonRepeating() != -1)
        cout<<ma.findFirstNonRepeating()<<"\n";
    else
        cout<<"no repeating elements is there in an array\n";

    return 0;
}