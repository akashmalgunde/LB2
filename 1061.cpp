#include<iostream>
using namespace std;

class MyArray
{
    int *iArr;
    int iSize;

    public:
    MyArray(int iSize)
    {
        this->iSize = iSize;
        this->iArr = new int[this->iSize];
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

    int findMinimum()
    {
        int iMin = 0;

        iMin = this->iArr[0];

        for(int i = 1; i < this->iSize; i++)
        {
            if(iMin > this->iArr[i])
                iMin = this->iArr[i];
        }

        return iMin;
    }
};

int main()
{
    MyArray ma(5);

    ma.accept();
    ma.display();

    cout<<"Min element in array is: "<<ma.findMinimum()<<"\n";

    return 0;
}