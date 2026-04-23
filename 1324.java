class Pattern 
{
    private int iRows;

    public Pattern(int i)
    {
        this.iRows = i;
    }

    public void display()
    {
        char ch = '\0';
        for(int i = 1; i <= this.iRows; i++)
        {
            ch = 'A';
            for(int j = 1; j <= i; j++,ch++)
                System.out.print(ch+" ");

            System.out.println();
        }
    }
}

class Test
{
    public static void main(String[] args) 
    {
        Pattern p = new Pattern(5);
        
        p.display();
    }
}