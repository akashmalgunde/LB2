import java.util.Scanner;

class MyArray
{
    private int iArr[];

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
        System.out.println("Entered array elements are:");

        for(int i = 0; i < this.iArr.length; i++)
        {
            System.out.print(this.iArr[i]+" ");
        }

        System.out.println();
    }

    int maxDiff()
    {
        int iDiff = 0;

        for(int i = 0; i < this.iArr.length; i++)
        {
            for(int j = i + 1; j < this.iArr.length; j++)
            {
                if(this.iArr[j] - this.iArr[i] > iDiff)
                    iDiff = this.iArr[j] - iArr[i];
            }
        }

        return iDiff;
    }
}


class Test
{
    public static void main(String[] args) {
        
        MyArray m = new MyArray(7);

        m.accept();
        m.display();
        
        System.out.println(m.maxDiff());
    }
}
