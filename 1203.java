class Digits
{
    private int iNo;

    public Digits(int iNo)
    {
        this.iNo = iNo;
    }

    int calculateSquare(int iNO)
    {
        return iNO * iNO;
    }

    int calculateSquareNum()
    {
        int iTemp = 0;
        int iSum = 0;   
        int iDigit = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + calculateSquare(iDigit);
            iTemp = iTemp / 10;
        }

        return iSum;
    }
}


class Test{
    public static void main(String args[])
    {
        Digits d = new Digits(234);

        System.out.println(d.calculateSquareNum());
    }
}