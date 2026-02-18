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

        System.out.println("Enter the array elements:");

        for(int i = 0; i < this.iArr.length; i++)
        {
            this.iArr[i] = sc.nextInt();
        }
    }

    void display()
    {
        System.out.println("Enter the array elements:");

        for(int i = 0; i < this.iArr.length; i++)
        {
            System.out.print(this.iArr[i] + " ");
        }

        System.out.println();
    }

    boolean checkPresenceAtLeft(int iPos)
    {
        int iEle = this.iArr[iPos];

        boolean bRet = false;

        for(int i = 0; i < iPos; i++)
        {
            if(this.iArr[i] == this.iArr[iPos])
            {
                bRet = true;
                break;
            }
        }

        return bRet;
    }

    void displayCount()
    {
        int iCnt = 0;
        for(int i = 0; i < this.iArr.length; i++)
        {
            iCnt = 0;
            if(!checkPresenceAtLeft(i))
            {
                for(int j = i + 1; j < this.iArr.length; j++)
                {
                    if(this.iArr[i] == this.iArr[j])
                        iCnt++;
                }

                System.out.println(this.iArr[i]+" is present as "+(++iCnt)+" times");
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

        m.displayCount();
    }
}