class Digits
{
    int iNo;

    public Digits(int iNo)
    {
        this.iNo = iNo;
    }

    boolean devide(int iNo)
    {
        boolean bRet = false;

        if(this.iNo % iNo == 0)
            bRet = true;

        return bRet;
    }

    int eventCount()
    {
        int iCount = 0;
        int iDigit = 0;
        int iTemp = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;

            if(devide(iDigit))
                iCount++;

            iTemp = iTemp / 10;
        }

        return iCount;
    }
}

class Test
{
    public static void main(String args[])
    {
        Digits d = new Digits(1124);

        System.out.println(d.eventCount());
    }
}