import java.util.Scanner;

class MyArray
{
    private int iArr[];

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
        System.out.println("Entered the array elements are :");
        //Scanner sc = new Scanner(System.in);

        for(int i = 0; i < this.iArr.length; i++)
        {
            System.out.print(this.iArr[i]+" ");
        }

        System.out.println();
    }

    public int difference()
    {
        int iSmall = 0;
        int iMax = 0;
        int iDif = 0;

        iSmall = iArr[0];
        iMax = iArr[0];

        for(int i = 0; i < this.iArr.length; i++)
        {
            if(iMax < this.iArr[i])
                iMax = this.iArr[i];
            else if(iSmall > this.iArr[i])
                iSmall = this.iArr[i];
        }

        iDif = iMax - iSmall;

        return iDif;
    }


}

class Test
{
    public static void main(String args[])
    {
        MyArray m = new MyArray(5);

        m.accept();
        m.display();

        System.out.println(m.difference());
    }
}