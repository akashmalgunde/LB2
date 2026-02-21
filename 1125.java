import java.util.Scanner;

class MyArray
{
    int iArr[];

    public MyArray(int iSize)
    {
        this.iArr = new int[iSize];
    }

    void accept()
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number");

        for(int i = 0; i < this.iArr.length; i++)
        {
            this.iArr[i] = sc.nextInt();
        }
    }

    void display()
    {
        System.out.println("Entered array elements are");

        for(int i = 0; i < this.iArr.length; i++)
        {
            System.out.print(this.iArr[i]+" ");
        }

        System.out.println();
    }

    void findPair(int iNum)
    {
        for(int i = 0; i < this.iArr.length-2; i++)
        {
            for(int j = i + 1; j < this.iArr.length; j++)
            {
                if(this.iArr[i] + this.iArr[j] == iNum)
                {
                    System.out.println(this.iArr[i]+" "+this.iArr[j]);
                    break;
                }

            }
        }
    }
}

class Test
{
    public static void main(String args[])
    {
        MyArray m = new MyArray(5);

        m.accept();

        m.display();

        m.findPair(9);

    }
}