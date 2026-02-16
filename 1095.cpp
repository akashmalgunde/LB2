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

    int findSecondLargestElement()
    {
        int iMax = 0;
        int iSecMax = 0;

        iMax = this->iArr[0];

        for(int i = 1; i < this->iSize; i++)
        {
            if(iMax < this->iArr[i])
            {
                iSecMax = iMax;
                iMax = this->iArr[i];
            }
            else if(iSecMax < this->iArr[i])
            {
                iSecMax = this->iArr[i];
            }
        }

        return iSecMax;
    }
};

int main()
{

    MyArray m(5);

    m.accept();
    m.display();

    cout<<"Second lergest element in an array is: "<<m.findSecondLargestElement()<<"\n";
    return 0;
}