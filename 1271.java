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
        for(int i = 1; i <= iRows; i++)
        {
            if(i == 1)
                iCnt = 1;
            else
                iCnt = i - 1;
            for(int j = 1; j <= i; j++)
            {
                System.out.print(iCnt+" ");
                iCnt++;
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