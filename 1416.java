class Pattern
{
    private int iRows;

    public Pattern(int i)
    {
        this.iRows = i;
    }

    public void display()
    {
        for(int i = 1; i <= iRows; i++)
        {
            for(int j = 1; j <= i; j++)
                System.out.print(i+" ");

            System.out.println();
        }

        for(int i = iRows-1; i >= 1; i--)
        {
            for(int j = 1; j <= i; j++)
            {
                System.out.print(i+" ");
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