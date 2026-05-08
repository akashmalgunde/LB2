class Digits
{
    private int iNo;

    public Digits(int iNo)
    {
        this.iNo = iNo;
    }

    int countOddDigit()
    {
        int iCnt = 0;

        int iTemp = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            if((iTemp % 10) % 2  != 0)
            {
                iCnt++;
                System.out.println("Coming inside");
            }

            iTemp = iTemp / 10;
        }

        return iCnt;
    }
}

class Test
{
    public static void main(String[] args) 
    {
        Digits d = new Digits(1234567);
        
        System.out.println(d.countOddDigit());
    }
}