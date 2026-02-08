class Number
{
    int iNo;

    public Number(int iNo)
    {
        this.iNo = iNo;
    }

    int calculateSquare()
    {
        return this.iNo * this.iNo;
    }

    int calculateSum(int iNo)
    {
        int iSum = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        return iSum;
    }

    boolean checkNeon()
    {
        boolean bRet = false;

        if(calculateSum(calculateSquare()) == this.iNo)
            bRet = true;

        return bRet;
    }
}

class Test
{
    public static void main(String args[])
    {
        Number n = new Number(8);

        if(n.checkNeon())
            System.out.println("Neon Number");
        else
            System.out.println("Not Neon Number");
    }
}