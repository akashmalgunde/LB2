import java.util.Scanner;

class MyArray
{
    int []iArr;

    public MyArray(int i)
    {
        this.iArr = new int[i];
    }

    void accept()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the array elements:");
        for(int i = 0; i < this.iArr.length; i++)
            this.iArr[i] = sc.nextInt();
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

    int countAppearance(int iPos)
    {
        int iCnt = 0;

        iCnt = 1;

        for(int i = iPos + 1; i < this.iArr.length; i++)
            if(this.iArr[i] == this.iArr[iPos])
            {
                iCnt++;
            }
        
        return iCnt;
    }

    boolean checkAtLeft(int iPos)
    {
        boolean bRet = false;
        int iElement = 0;
        iElement = this.iArr[iPos];

        for(int i = 0; i < iPos; i++)
        {
            if(this.iArr[i] == iElement)
            {
                bRet = true;
                break;
            }
        }

        return bRet;
    }

    int checkMajorityElement()
    {
        int iMajority = -1;
        int iCnt = 0;

        for(int i = 0; i < this.iArr.length; i++)
        {
            if(!checkAtLeft(i))
            {
                iCnt = this.countAppearance(i);

                if(iCnt > this.iArr.length / 2)
                {
                    iMajority = this.iArr[i];
                    break;
                }
            }
        }

        return iMajority;
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

        iRet = m.checkMajorityElement();

        if(iRet != -1)
            System.out.println(iRet);
        else 
            System.out.println("No Majority element is there in array");
    }
}