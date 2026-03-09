class Digits
{
    private int iNo;

    public Digits(int iNo)
    {
        this.iNo = iNo;
    }

    public int revNumber()
    {
        int iRev = 0;
        int iDigit = 0;
        int iTemp = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iRev = iRev * 10 + iDigit;
            iTemp = iTemp / 10;
        }

        return iRev;
    }
}


class Test
{
    public static void main(String args[])
    {
        Digits d = new Digits(16516);

        System.out.println(d.revNumber());
    }
}