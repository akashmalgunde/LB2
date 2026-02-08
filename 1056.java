import java.util.Scanner;

class MyArray
{
    int iArr[];

    public MyArray(int iSize)
    {
        this.iArr = new int[iSize];
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
        for(int i = 0; i < this.iArr.length; i++)
            System.out.print(this.iArr[i]+" ");

        System.out.println();
    }

    public void rotateRight()
    {
        int iLast = 0;

        iLast = iArr[this.iArr.length - 1];

        for(int i = this.iArr.length - 1; i > 0; i--)
        {
            iArr[i] = iArr[i-1];
        }
        iArr[0] = iLast;


        }
    }


class Test
{
    public static void main(String args[])
    {
        MyArray m = new MyArray(5);

        m.accept();
        m.display();

        m.rotateRight();
        m.display();
    }
}