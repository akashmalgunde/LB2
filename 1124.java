class Numbers
{
    int iNo;

    public Numbers(int i)
    {
        this.iNo = i;
    }

    int calculateSum()
    {
        int iTemp = 0;
        int iSum = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iSum = iTemp % 10 + iSum;
            iTemp = iTemp /10;
        }

        return iSum;
    }

    boolean checkNiven()
    {
        boolean bRet = false;

        if(this.iNo % calculateSum() == 0)
            bRet = true;

        return bRet;
    }
}

class Test
{
    public static void main(String args[])
    {
        Numbers n = new Numbers(19);

        if(n.checkNiven())
            System.out.println("Niven number");
        else
            System.out.println("Not Niven number");
    }
}