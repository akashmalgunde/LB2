import java.util.Scanner;

class MyArray
{
    int[] iArr;

    public MyArray(int i)
    {
        this.iArr = new int[i];
    }

    void accept()
    {
        System.out.println("Enter the array elements:");

        Scanner sc = new Scanner(System.in);

        for(int i = 0; i < this.iArr.length; i++)
        {
            this.iArr[i] = sc.nextInt();
        }
    }

    void display()
    {
        System.out.println("Entered the array elements are:");

        //Scanner sc = new Scanner(System.in);

        for(int i = 0; i < this.iArr.length; i++)
        {
            System.out.println(this.iArr[i]+" ");
        }

        System.out.println();
    }

    int calculateSum()
    {
        int iSum = 0;

        for(int i = 0; i < this.iArr.length; i++)
        {
            iSum = iSum + this.iArr[i];
        }

        return iSum;
    }
    int calculateAbsent()
    {
        int iSize = 0;
        int iMissingNum = 0;
        int iExpectedSum = 0;
        int iActualSum = 0;

        iSize = this.iArr.length + 1;

        iExpectedSum = (iSize * (iSize + 1)) / 2;

        iActualSum = this.calculateSum();

        iMissingNum = iExpectedSum - iActualSum;

        return iMissingNum;
    }


}

class Test
{
    public static void main(String args[])
    {
        MyArray m = new MyArray(5);

        int iRet = 0;

        m.accept();
        m.display();

        iRet = m.calculateAbsent();

        System.out.println(iRet);
        
    }
}