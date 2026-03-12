class Numbers
{
    private int iNo;

    public Numbers(int iNo)
    {
        this.iNo = iNo;
    }

    public int calculateFact(int iNo)
    {
        int iFact = 1;

        for(int i = iNo; i >= 1; i--)
            iFact = iFact * i;

        return iFact;
    }

    public int calculateSum()
    {
        int iTemp = 0;
        int iSum  = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iSum = iSum + calculateFact(iTemp % 10);
            iTemp = iTemp / 10;
        }

        return iSum;
    }

    boolean checkStrong()
    {
        boolean bRet = false;

        if(this.calculateSum() == this.iNo)
            bRet = true;

        return bRet;
    }

}

class Test
{
    public static void main(String args[])
    {
        Numbers n = new Numbers(145);

        if(n.checkStrong())
            System.out.println("Strong ");
        else
            System.out.println("Not Strong");
    }
}