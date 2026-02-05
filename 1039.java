class Numbers
{
    int iNo;

    public Numbers(int i)
    {
        this.iNo = i;
    }

    boolean checkPrime(int iNo)
    {
        boolean bRet = true;

        for(int i = 2; i <= iNo /2; i++)
            if(iNo % i == 0)
            {
                bRet = false;
                break;
            }

        return bRet;
    }


    int calculateReverse()
    {
        int iTemp = 0;
        int iDigit = 0;
        int iReverse = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iReverse = iReverse * 10 + iDigit;
            iTemp = iTemp / 10;
        }

        return iReverse;
    }

    boolean checkTwistedPrime()
    {
        boolean bRet = false;

        if(checkPrime(this.iNo) && checkPrime(calculateReverse()))
            bRet = true;

        return bRet;
    }
}

class Test
{
    public static void main(String args[])
    {
        Numbers n = new Numbers(24);

        if(n.checkTwistedPrime())
            System.out.println("Twisted prime");
        else
            System.out.println("Not twisted prime");
    }
}