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
            for(int j = 1; j <= iRows; j++)
            {
                if(j <= i)
                    System.out.print(j+" ");
                else
                    System.out.print("  ");
            }

            for(int j = this.iRows; j >=1; j--)
            {
                if(j <= i)
                    System.out.print(j+" ");
                else
                    System.out.print("  ");
            }
            System.out.println();
        }

        for(int i = this.iRows-1; i >= 1; i--)
        {
            for(int j = 1; j <= this.iRows; j++)
            {
                if(j <= i)
                    System.out.print(j+" ");
                else
                    System.out.print("  ");
            }

            for(int j = this.iRows; j >= 1; j--)
                if(j <= i)
                    System.out.print(j+" ");
                else
                    System.out.print("  ");

            System.out.println();
        }
    }
}

class Test
{
    public static void main(String args[])
    {
        Pattern p = new Pattern(4);

        p.display();
    }
}