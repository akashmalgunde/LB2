class Numbers
{
    private int iNo;

    public Numbers(int i)
    {
        this.iNo = i;
    }

    int rev()
    {
        int iTemp = 0;
        int iDigit = 0;
        int iRev = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;

            iRev = iRev * 10 + iDigit;
            
            iTemp = iTemp / 10;
        }

        return iRev;
    }

    boolean checkPrime(int iNo)
    {
        boolean bRet = true;

        for(int i = 2; i <= iNo/2; i++)
        {
            if(iNo % i == 0)
            {
                bRet = false;
                break;
            }
        }

        return bRet;
    }

    boolean checkEmirp()
    {
        boolean bRet = false;

        if(checkPrime(iNo) == checkPrime(rev()))
            bRet = true;


        return bRet;

    }
}

class Test
{
    public static void main(String[] args) 
    {
        Numbers n = new Numbers(14);
        
        if(n.checkEmirp())
            System.out.println("Emirp number");
        else
            System.out.println("Not Emirp number");
    }
}