class Digits
{
    int iNo;

    public Digits(int i)
    {
        this.iNo = i;
    }

    int calculateFactorial(int iNo)
    {
        int iFact = 1;

        for(int i = iNo; i > 1; i--)
        {
            iFact = iFact * i;
        }

        return iFact;
    }

    int calculateFactorialOfNum()
    {
        int iTemp = 0;
        int iSum = 0;
        int iDigit = 0;

        iTemp = this.iNo;

        while (iTemp != 0)
        {
            iDigit = iTemp % 10;
            //System.out.println(calculateFactorial(iDigit));
            iSum = iSum + calculateFactorial(iDigit);
            iTemp = iTemp / 10;
        }

        return iSum;
    }

    boolean checkStrong()
    {
        int iSum = 0;
        boolean bRet = false;

        iSum = calculateFactorialOfNum();

        System.out.println(iSum);

        if(iSum == this.iNo)
            bRet = true;

        return bRet;
    }
}


class Test
{
    public static void main(String args[])
    {
        Digits d = new Digits(145);

        if(d.checkStrong())
            System.out.println("strong number");
        else
            System.out.println("Not strong number");

    }
}