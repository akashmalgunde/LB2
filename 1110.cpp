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
        cout<<"Enter the array elements:\n";

        for(int i = 0; i < this->iSize; i++)
        {
            cout<<this->iArr[i]<<" ";
        }
        cout<<"\n";
    }

    int calculateSumDigit(int iNo)
    {
        int iSum = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iSum = iNo % 10 + iSum;

            iNo = iNo / 10;
        }

        return iSum;
    }

    int calculateSum()
    {
        int iSum = 0;
        int iIndSum = 0;

        for(int i = 0; i < this->iSize; i++)
        {
            iIndSum = calculateSumDigit(this->iArr[i]);
            cout<<this->iArr[i]<<"And the sum of their digit is:"<<iIndSum<<"\n";
            iSum = iSum + iIndSum;
        }

        return iSum;
    }
};

int main()
{
    MyArray ma(5);

    ma.accept();
    ma.display();

    cout<<ma.calculateSum();


    return 0;
}