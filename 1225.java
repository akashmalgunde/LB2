class Numbers
{
    private int iNo;

    public Numbers(int iNo)
    {
        this.iNo = iNo;
    }

    int calculateSq()
    {
        int iSquare = 0;
        iSquare = this.iNo * this.iNo;

        return iSquare;
    }

    int calculateSum(int iTemp)
    {
        int iSum = 0;
        int iDigit = 0;
        while(iTemp != 0)
        {

            iDigit = iTemp % 10;
            iSum = iSum + iDigit;
            iTemp = iTemp / 10;
        }
        return iSum;
    }

    boolean checkNeon()
    {
        boolean bRet = false;

        if(this.iNo == calculateSum(calculateSq()))
            bRet = true;

        return bRet;
    }
}

class Test
{
    public static void main(String args[])
    {
        Numbers n = new Numbers(9);

        if(n.checkNeon())
            System.out.println("Neon number");
        else
            System.out.println("Not Neon");
    }
}