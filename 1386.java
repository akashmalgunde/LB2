import java.util.Scanner;

class MyArray
{
    private int iArr[];

    public MyArray(int iSize)
    {
        this.iArr = new int[iSize];
    }

    public void display()
    {
        System.out.println("Entered array elements:");

        for(int i = 0; i < this.iArr.length; i++)
            System.out.println(iArr[i]+" ");
    }

    public void accept()
    {
        Scanner sobj = new Scanner(System.in);

        for(int i = 0; i < this.iArr.length; i++)
            this.iArr[i] = sobj.nextInt();
    }

    public int calDiff()
    {
        int iSmall = 0;
        int iLarge = 0;
        

        iLarge = iArr[0];
        iSmall = iArr[0];

        for(int i = 1 ; i < this.iArr.length; i++)
        {
            if(iArr[i] > iLarge)
                iLarge = iArr[i];
            else if(iArr[i] < iSmall)
                iSmall = iArr[i];
        }

        return iLarge - iSmall;


    }
}

class Test
{
    public static void main(String[] args) {
        
        MyArray m = new MyArray(5);

        m.accept();
        m.display();

        System.out.println(m.calDiff()+"is difference");
    }
}