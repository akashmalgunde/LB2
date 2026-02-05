import java.util.Scanner;

class Pattern
{
    int iRows;

    public Pattern(int i)
    {
        this.iRows = i;
    }

    public void display()
    {
        for(int i = 1; i <= this.iRows; i++)
        {
            for(int j = 1; j <= iRows; j++)
            {
                if(j == i)
                    System.out.print(i+" ");
                else
                    System.out.print("  ");
            }

            for(int j = this.iRows - 1; j >= 1; j--)
            {
                if(i == j)
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