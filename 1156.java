class Digits
{
    int iNo;

    public Digits(int i)
    {
        this.iNo = i;
    }

    int calculateSumOfDigitAtEvenPos()
    {
        int iTemp = 0;
        int iPos = 0;
        int iSum = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iPos++;

            if(iPos % 2 == 0)
            {
                iSum = iSum + iTemp % 10;
            }

            iTemp = iTemp / 10;

        }

        return iSum;
    }
}

class Test
{
    public static void main(String args[])
    {
        Digits d = new Digits(12);

        System.out.println(d.calculateSumOfDigitAtEvenPos());
    }
}