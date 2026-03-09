class Numbers
{
    private int iNo;

    public Numbers(int iNo
    )
    {
        this.iNo = iNo;
    }

    public void display()
    {
        for(int i = 1; i <= 10; i++)
        {
            System.out.println(this.iNo +" X "+i+" = "+i*this.iNo);
        }
    }
}

class Test
{
    public static void main(String args[])
    {
        Numbers N = new Numbers(5);

        N.display();
    }
}