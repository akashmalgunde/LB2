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

    int maxProduct()
    {
        int iMax = 0;

        iMax = this->iArr[0] * this->iArr[1];

        for(int i = 0; i < this->iSize - 1; i++)
        {
            for(int j = i + 1; j < this->iSize; j++)
            {
                if(iMax < this->iArr[i] * this->iArr[j])
                    iMax = this->iArr[i] * this->iArr[j];
            }
        }

        return iMax;
    }
};


int main()
{
    MyArray m(5);

    m.accept();

    m.display();

    cout<<m.maxProduct()<<"\n";
    
    return 0;
}