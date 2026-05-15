class Pattern
{
    private int iRows;

    public Pattern(int i)
    {
        this.iRows = i;
    }

    public void display()
    {
        for(int i = 1; i <= this.iRows; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                if(j % 2 == 0)
                    System.out.print("0 ");
                else
                    System.out.print("1 ");
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