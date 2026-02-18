class Pattern
{
    int iRows;

    public Pattern(int i)
    {
        this.iRows = i;
    }

    public void display()
    {
        if(this.iRows % 2 == 0)
        {
            System.out.println("This input is not applicable for the given pattern");
            return;
        }

        for(int i = 1; i <= this.iRows; i++)
        {
            for(int j = 1; j <= this.iRows; j++)
            {
                if(i == 1 || j == 1 || i == this.iRows || j == iRows || i % 2 == 0 && j % 2 == 0 || i % 2 != 0 && j % 2 != 0)
                {
                    System.out.print("* ");
                }
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
        Pattern p = new Pattern(6);

        p.display();
    }
}