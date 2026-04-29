class Numbers
{
    private int iNo;

    public Numbers(int iNo)
    {
        this.iNo = iNo;
    }

    public int calSum(int iNo)
    {
        int iRes = 0;
        int iTemp = 0;

        iTemp = iNo;

        while (iTemp != 0)
        {
            iRes = iRes + (iTemp % 10);
            iTemp = iTemp / 10;
        }

        return iRes;
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

    int calPrimeSum()
    {
        int iSum = 0;

        for(int i = 2; i <= iNo / 2; i++)
        {
            if(this.iNo % i == 0)
            {
                if(checkPrime(i))
            {
                iSum = iSum + calSum(i);
            }
            }
        }

        return iSum;
    }


    boolean checkSmith()
    {
        boolean bRet = false;

       // System.out.println(calPrimeSum());

       // System.out.println(calSum(iNo));

        if(calPrimeSum() == calSum(this.iNo))
            bRet = true;

        return bRet;
    }
}

class Test
{
    public static void main(String[] args) {
        Numbers n = new Numbers(22);

    if(n.checkSmith())
        System.out.println("Smith number");
    else
        System.out.println("Not smith number");
    }
}