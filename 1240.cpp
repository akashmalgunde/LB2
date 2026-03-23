#include<iostream>
using namespace std;

class MyArray
{
    private:
    int *iArr;
    int iSize;

    public:

    MyArray(int i)
    {
        this->iSize = i;
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
            cout<<this->iArr[i]<<" ";;

        cout<<"\n";
    }

    int findLeftRightEq()
    {
        int iSumLeft = 0;
        int iSumRight = 0;
        int iIndex = -1;

        for(int i = 0,j = 0,k = this->iSize - 1; i < this->iSize / 2; i++,j++,k--)
        {
            iSumLeft = iSumLeft + this->iArr[j];
            iSumRight = iSumRight + this->iArr[k];

            if(iSumLeft == iSumRight)
            {
                iIndex = i;
                break;
            }
        }

        return iIndex;
    }
};


int main()
{
    MyArray M(5);
    M.accept();
    M.display();

    int iRet = M.findLeftRightEq();
    if(iRet != -1)
        cout<<iRet<<" is the index"<<"\n";
    else
        cout<<"No such index exists";
        
    return 0;
}
