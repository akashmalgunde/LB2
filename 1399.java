class Digits
{
    private int iNo;

    public Digits(int iNo)
    {
        this.iNo = iNo;
    }

    public int calFactorial(int iNo)
    {
        int iFact = 1;

        for(int i = 1; i <= iNo; i++)
            iFact = iFact * i;

        return iFact;
    }

    public int calSum()
    {
        int iSum = 0;

        int iTemp = 0;
        int iDigit = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + calFactorial(iDigit);
            iTemp = iTemp / 10;
        }

        return iSum;
    }

    boolean checkPeterson()
    {
        boolean bRet = true;

        if(calSum() != this.iNo)
            bRet = false;

        return bRet;
    }
}

class Test
{
    public static void main(String[] args) 
    {
        Digits d = new Digits(146);

        if(d.checkPeterson())
            System.out.println("Peterson number");
        else
            System.out.println("Not Peterson number");
    }
}