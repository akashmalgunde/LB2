#include<iostream>
using namespace std;

class MyArray
{
    private:

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

    int findMin()
    {
        int iMin = 0;

        iMin = iArr[0];

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

    MyArray m(5);

    m.accept();

    m.display();

    cout<<"After the display\n";

    cout<<m.findMin();

    return 0;
}