class MyNum
{
    private int iNo;

    public MyNum(int i)
    {
        this.iNo = i;
    }

    public int rev()
    {
        int iTemp = 0;
        int iRev = 0;
        int iDig = 0;


        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iDig = iTemp % 10;
            iRev = iRev * 10 + iDig;
            iTemp = iTemp / 10;
        }

        return iRev;
    }

    boolean checkPrime()
    {
        boolean bRet = true;

        for(int i = 2; i <= this.iNo / 2; i++)
        {
            if(this.iNo % 2 == 0)
            {
                bRet = false;
                break;
            }

        }

        return bRet;
    }



    boolean checkPal()
    {
        boolean bRet = false;

        if(this.iNo == this.rev())
            bRet = true;

        return bRet;
    }


    boolean checlPalPrime()
    {
        boolean bRet = false;

        if(checkPal()&& checkPrime())
            bRet = true;

        return bRet;
    }
}

class Test
{
    public static void main(String args[])
    {
        MyNum n = new MyNum(131);

        if(n.checlPalPrime())
            System.out.println("Palindromic prime");
        else
            System.out.println("Not Palindromic Prime");
    }
}