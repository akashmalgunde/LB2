class Digits
{

    private int iNo;

    public Digits(int i)
    {
        this.iNo = i;
    }

    int findSeconsLarge()
    {
        int iMax = 0;
        int iSecMax = 0;
        int iTemp = this.iNo;
        int iDigit = 0;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit > iMax)
            {
                iSecMax = iMax;
                iMax = iDigit;
            }
            else if(iSecMax < iDigit)
                iSecMax = iDigit;

            iTemp = iTemp / 10;
        }

        return iSecMax;
    }
}

class Test
{
    public static void main(String args[])
    {
        Digits d = new Digits(57294);

        System.out.println(d.findSeconsLarge());
    }
}