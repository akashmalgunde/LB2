import java.util.Scanner;

class MyArray
{
    private int []iArr;

    public MyArray(int iSize)
    {
        this.iArr = new int[iSize];
    }

    public void accept()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the array elements:\n");

        for(int i = 0; i < this.iArr.length; i++)
            this.iArr[i] = sc.nextInt();

    }

    public void display()
    {
        System.out.println("Entered array elements are:");

        for(int i = 0; i < this.iArr.length; i++)
            System.out.println(this.iArr[i]+" ");

        System.out.println();
    }

    int calAvg()
    {
        int iAvg = 0;
        int iSum = 0;

        for(int i = 0; i < this.iArr.length; i++)
            iSum = iSum + this.iArr[i];

        iAvg = iSum / this.iArr.length;

        return iAvg;
    }

    int countAvgGreater()
    {
        int iCnt = 0;
        int iAvg = 0;

        iAvg = this.calAvg();

        for(int i = 0; i < this.iArr.length; i++)
        {
            if(this.iArr[i] > iAvg)
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

        System.out.println(m.countAvgGreater());
    }
}