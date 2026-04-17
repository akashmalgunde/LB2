class Digits
{
    private int iNo;

    public Digits(int iNo)
    {
        this.iNo = iNo;
    }

    int findLarge()
    {
        int iDigit = 0;
        int iLarge = 0;
        int iTemp = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;

            if(iDigit > iLarge)
            {
                iLarge = iDigit;
            }

            if(iLarge == 9)
                break;
            iTemp = iTemp / 10;
        }

        return iLarge;
    }
}

class Test
{
    public static void main(String args[])
    {
        Digits d = new Digits(61665159);

        System.out.println(d.findLarge());
    }
}