class Pattern
{
    private int iRows;

    public Pattern(int i)
    {
        this.iRows = i;
    }

    public void display()
    {
        int iCnt = 0;

        int i = 0;
        int j = 0;

        for(i = 1; i <= this.iRows; i++)
        {
            for(j = 1; j <= i; j++)
                System.out.print((++iCnt)+" ");

            System.out.println();
        }

        iCnt = iCnt - this.iRows + 1;

        for(i = iRows - 1; i >= 1; i--)
        {
            for(j = 1; j <= i; j++)
            {
                System.out.print(--iCnt+" ");
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