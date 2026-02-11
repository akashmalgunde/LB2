class Pattern
{
    int iRows;

    public Pattern(int i)
    {
        this.iRows = i;
    }

    void display()
    {
        int iCnt1 = 0;
        int iCnt2 = 0;

        iCnt1 = 1;
        iCnt2 = this.iRows * 2 - 1;
        for(int i = 1; i <= this.iRows; i++,iCnt1++,iCnt2--)
        {
            for(int j = 1; j <= this.iRows * 2; j++)
            {
                if(j == iCnt1 || j == iCnt2)
                    System.out.print(i+" ");
                else
                    System.out.print("  ");
            }
            System.out.println();
        }

        iCnt1 = iCnt1-2;
        iCnt2 = iCnt2 + 2;
        for(int i = this.iRows-1; i >= 1; i--,iCnt1--,iCnt2++)
        {
            for(int j = 1; j <= this.iRows * 2; j++)
            {
                if(j == iCnt1 || j == iCnt2)
                    System.out.print(i+" ");
                else
                    System.out.print("  ");
            }
            System.out.println();
        }
    }
}

class Test
{
    public static void main(String args[])
    {
        Pattern p = new Pattern(5);

        p.display();
    }
}