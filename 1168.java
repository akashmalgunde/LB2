class Pattern
{
    private int iRows;

    public Pattern(int iRows)
    {
        this.iRows = iRows;
    }

    public void display()
    {
        for(int i = 1; i <= this.iRows; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                System.out.print(j+" ");
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