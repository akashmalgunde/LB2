class Pattern
{
    int iRows;

    public Pattern(int i)
    {
        this.iRows = i;
    }

    void display()
    {
        int iCnt = 0;

        iCnt = 1;

        for(int i = 1; i <= this.iRows; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                System.out.print(iCnt+++" ");
            }

            System.out.println();
        }

        iCnt = iCnt - (this.iRows+1);

        for(int i = this.iRows - 1; i >= 1; i--)
        {
            for(int j = 1; j <= i; j++)
            {
                System.out.print(iCnt--+" ");
            }

            System.out.println();
        }

    }
}

class Test
{
    public static void main(String[] args) 
    {
        Pattern p = new Pattern(25);

        p.display();
    }
}