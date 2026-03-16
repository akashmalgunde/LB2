class Digits
{
    private int iNo;

    public Digits(int iNo)
    {
        this.iNo = iNo;
    }

    int CountFreq(int iNum)
    {
        int iCnt = 0;

        int iTemp = 0;
        iTemp = this.iNo;

        while(iTemp != 0)
        {
            if(iNum == (iTemp % 10))
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
        Digits d = new Digits(4654153);

        System.out.println(d.CountFreq(4));
    }
}