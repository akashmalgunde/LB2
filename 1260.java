class Digits
{
    private int iNo;

    public Digits(int i)
    {
        this.iNo = i;
    }

    int countOddDig()
    {
        int iTemp = 0;
        int iCnt = 0;
        iTemp = this.iNo;

        while(iTemp != 0)
        {
            if((iTemp % 10) % 2 != 0)
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
        Digits d = new Digits(1234567);

        System.out.println(d.countOddDig());
    }
}