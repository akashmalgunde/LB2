import java.util.*;


class MyArray
{
    private int iArr[];

    public MyArray(int i)
    {
        this.iArr = new int[i];
    }

    public void accept()
    {
        System.out.println("Enter the array elements are:");
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
            //this.iArr[i] = sc.nextInt();
            System.out.println(this.iArr[i]+" ");
        }

        System.out.println();
    }

    int findSmallest()
    {
        int iMin = 0;

        iMin = this.iArr[0];

        for(int i = 1; i < this.iArr.length; i++)
        {
            if(iArr[i] < iMin)
                iMin = this.iArr[i];

            //if(iMin )
        }

        return iMin;
    }
}

class Test
{
    public static void main(String[] args) 
    {
        MyArray m = new MyArray(5);
        
        m.accept();
        m.display();

        System.out.println(m.findSmallest());
    }
}