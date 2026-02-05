import java.util.Scanner;

class MyArray
{
    int iSize;
    int iArr[];

    public MyArray(int i)
    {
        this.iSize = i;
        this.iArr = new int[iSize];
    }

    void accept()
    {
        Scanner sc = new Scanner(System.in);
        for(int i = 0; i < this.iArr.length; i++)
        {
            this.iArr[i] = sc.nextInt();
        }
    }

    void display()
    {
        //Scanner sc = new Scanner(System.in);
        for(int i = 0; i < this.iArr.length; i++)
        {
            System.out.print(this.iArr[i]+" ");
        }
        System.out.println();
    }

    int findFirstRepeated()
    {
        //int iRet = -1;
        for(int i = 0; i < this.iArr.length; i++)
        {
            for(int j = i + 1; j < this.iArr.length; j++)
            {
                if(this.iArr[i] == this.iArr[j])
                {
                    return this.iArr[i];
                }
            }

        }

        return -1;
    }

}

class Test
{
    public static void main(String args[])
    {
        MyArray m = new MyArray(7);

        int iRet = 0;

        m.accept();
        m.display();

        iRet = m.findFirstRepeated();

        if(iRet != -1)
            System.out.println(iRet);
        else
            System.out.println("No repeated element is there in array");
    }
}