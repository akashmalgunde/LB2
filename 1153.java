class Pattern
{
    int iRows;

    public Pattern(int iRows)
    {
        this.iRows = iRows;
    }

    public void display()
    {
        char ch = '\0';

        ch = 'A';

        for(int i = 1; i <= this.iRows; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                System.out.print(ch+" ");
                ch++;
            }

            System.out.println();
        }

        int ch1 = '\0';

        ch1 = ((ch) - this.iRows * 2 + 1);

        for(int i = this.iRows - 1; i >= 1; i--,ch1 = ch1 - i)
        {
            ch = (char)ch1;

            for(int j = 1; j <= i; j++)
            {
                System.out.print(ch+" ");
                ch++;
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
