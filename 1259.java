class Numbers
{
    private int iNo;

    public Numbers(int i)
    {
        this.iNo = i;
    }

    public int calRev()
    {
        int iTemp = 0;
        int iDigit = 0;
        int iRev = 0;

        iTemp = this.iNo;
        
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iRev = iRev * 10 + iDigit;
            iTemp = iTemp / 10;

        }
        return iRev;
    }

    public boolean checkpal()
    {
        if(this.iNo == calRev())
            return true;
        else
            return false;
    }
}

class Test
{
    public static void main(String args[])
    {
        Numbers n = new Numbers(121);

        if(n.checkpal())
            System.out.println("pal num");
        else
            System.out.println("Not pal");
    }
}