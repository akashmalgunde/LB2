class Digits
{
    int iNo;

    public Digits(int i)
    {
        this.iNo = i;
    }

    boolean checkDigit(int iNo)
    {
        int iTemp = 0;
        int iDigit = 0;
        boolean bRet = false;
        int iCnt = 0;

        iTemp = this.iNo;
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit == iNo)
            {
                iCnt++;
            }
            iTemp = iTemp / 10;

        }
        if(iCnt > 1)
            bRet = true;

        return bRet;
    }

    boolean checkUnique()
    {
        int iTemp = 0;
        int iDigit = 0;
        boolean bRet = true;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(checkDigit(iDigit))
            {
                bRet = false;
                break;
            }
            iTemp = iTemp / 10;
        }

        return bRet;
    }
}

class Test
{
    public static void main(String args[])
    {
        Digits d = new Digits(12134);

        if((d.checkUnique()))
            System.out.println("Unique digits in number");
        else
            System.out.println("not contain Unique digits in number");
    }
}