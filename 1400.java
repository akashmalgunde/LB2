class Digits
{
    private int iNo;

    public Digits(int iNo)
    {
        this.iNo = iNo;
    }

    public int countDivisible()
    {
        int iCnt = 0;
        int iDigit = 0;

        int iTemp = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit % 3 == 0)
                iCnt++;
            iTemp = iTemp / 10;
        }

        return iCnt;
    }
}

class Test
{
    public static void main(String args[])
    {
        Digits d = new Digits(583274);

        System.out.println(d.countDivisible());
    }
}