class Pattern
{
    int iRows;

    public Pattern(int i)
    {
        this.iRows = i;
    }

    void display()
    {
        int iCnt = 0;
        iCnt = this.iRows;
        for(int i = 1; i <= this.iRows; i++,iCnt--)
        {
            for(int j = 1; j <= this.iRows; j++)
            {
                if(j <= i)
                    System.out.print("* ");
                else
                    System.out.print("  ");
            }

            for(int k = 1; k <= this.iRows; k++)
            {
                if(k >= iCnt)
                    System.out.print("* ");
                else
                    System.out.print("  ");
            }

            System.out.println();
        }

        for(int i = this.iRows - 1; i >= 1; i--)
        {
            for(int j = 1; j <= this.iRows; j++)
            {
                if(j <= i)
                    System.out.print("* ");
                else
                    System.out.print("  ");
            }

            for(int k = this.iRows; k >= 1; k--)
            {
                if(k <= i)
                    System.out.print("* ");
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

        p.display();;
    }
}