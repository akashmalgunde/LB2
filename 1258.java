import java.util.Scanner;

class MyArray
{
    private int[] iArr;
    
    public MyArray(int i)
    {
        this.iArr = new int[i];
    }

    public void accept()
    {
        System.out.println("Enter the array elements:");
        Scanner sc = new Scanner(System.in);

        for(int i = 0; i < this.iArr.length; i++)
        {
            this.iArr[i] = sc.nextInt();
        }
    }

    public void display()
    {
        System.out.println("Entered array elements are:");
        //Scanner sc = new Scanner(System.in);

        for(int i = 0; i < this.iArr.length; i++)
        {
            System.out.print(this.iArr[i]+" ");
        }

        System.out.println();
    }

    void shiftLeft()
    {
        int iFirst = 0;

        iFirst = this.iArr[0];

        for(int i = 1; i < this.iArr.length; i++)
        {
            this.iArr[i - 1] = this.iArr[i];
        }

        this.iArr[iArr.length - 1] = iFirst;
    }
}

class Test
{
    public static void main(String args[])
    {
        MyArray m = new MyArray(5);

        m.accept();
        m.display();

        m.shiftLeft();

        m.display();
    }
}
