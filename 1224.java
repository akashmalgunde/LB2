class Pattern
{
    private int iRows;

    public Pattern(int iRows)
    {
        this.iRows = iRows;
    }

    void display()
    {
        int iCnt1 = 0;
        int iCnt2 = 0;
        int iPrint = 0;

        iCnt1 = this.iRows;
        iCnt2 = this.iRows;
        for(int i = 1; i <= this.iRows; i++,iCnt1--,iCnt2++)
        {
            iPrint = 1;
            for(int j = 1; j < this.iRows*2; j++)
            {
                if(j >= iCnt1 && j <= iCnt2)
                {
                    if(i % 2 == 0)
                    {
                        if(j % 2 == 0)
                        {
                            System.out.print(iPrint+" ");
                            iPrint++;
                        }
                        else
                        {
                            System.out.print("  ");
                        }
                    }
                    else
                    {
                        if(j%2 != 0)
                        {
                            System.out.print(iPrint+" ");
                            iPrint++;
                        }
                        else
                        {
                            System.out.print("  ");
                        }
                    }
                }
                else
                {
                    System.out.print("  ");
                }
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