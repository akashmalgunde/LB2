import java.util.Scanner;

class MyArray
{
    public int iArr[];

    public MyArray(int i)
    {
        this.iArr = new int[i];
    }

    void accept()
    {
        Scanner sobj = new Scanner(System.in);

        for(int i = 0; i < this.iArr.length; i++)
        {
            this.iArr[i] = sobj.nextInt();
        }
    }

    void display()
    {
        //Scanner sobj = new Scanner(System.in);

        for(int i = 0; i < this.iArr.length; i++)
        {
            System.out.print(this.iArr[i]+" ");
        }
        System.out.println();
    }

    int countEven()
    {
        int iCnt = 0;

        for(int i = 0; i < this.iArr.length; i++)
        {
            if(this.iArr[i] % 2 == 0)
                iCnt++;


        }

        return iCnt;
    }
}

class Test
{
    public static void main(String args[])
    {
        MyArray m = new MyArray(5);

        m.accept();

        m.display();

        System.out.println("Even digit count is: "+m.countEven());

        int oddCnt = m.iArr.length - m.countEven();

        System.out.println("Odd digit count is: "+oddCnt);
    }
}