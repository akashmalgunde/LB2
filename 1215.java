import java.util.Scanner;

class MyArray
{
    private int []iArr;

    public MyArray(int iSize)
    {
        this.iArr = new int[iSize];
    }

    void accept()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the array elements:");

        for(int i = 0; i < this.iArr.length; i++)
        {
            this.iArr[i] = sc.nextInt();
        }

    }

    void display()
    {
        System.out.println("Entred array elements are:");

        for(int i = 0; i < this.iArr.length; i++)
            System.out.print(this.iArr[i]+" ");

        System.out.println();
    }

    void findLeader()
    {
        int j = 0;
        int i = 0;
        int iLeader = 0;

        for(i = 0; i < this.iArr.length; i++)
        {
            for( j = i + 1; j < this.iArr.length; j++)
            {
                if(this.iArr[i] < this.iArr[j])
                    break;
            }

            if(j == this.iArr.length)
            {
                iLeader = this.iArr[i];
                System.out.print(iLeader+" ");
            }

        }

        //return iLeader;
    }
}

class Test
{
    public static void main(String args[])
    {
        MyArray m = new MyArray(6);

        m.accept();
        m.display();

        m.findLeader();
        //System.out.println(m.findLeader());
    }
}