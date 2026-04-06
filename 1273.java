class Numbers
{
    private int iNo;
    
    public Numbers(int iNo)
    {
        this.iNo = iNo;
    }

    boolean checkZero()
    {
        boolean bRet = false;

        int iTemp = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            if(iTemp % 10 == 0)
            {
                bRet = true;
                break;
            }
            iTemp = iTemp / 10;
        }

        return bRet;
    }

    int countLen()
    {
        int iTemp = 0;
        int iCnt = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iTemp = iTemp / 10;
            iCnt++;
        }

        return iCnt;
    }

    int calPower()
    {
        int iPower = 1;

        for(int i = 1; i <= countLen()-1; i++)
        {
            iPower = iPower * 10;
        }

        return iPower;
    }

    boolean checkDuck()
    {
        boolean bRet = false;

        if(checkZero() && this.iNo % calPower() != 0)
            bRet = true;

        return bRet;
    }
}

class Test
{
    public static void main(String args[])
    {
        Numbers n = new Numbers(01024);

        if(n.checkDuck())
            System.out.println("Duck number");
        else
            System.out.println("Not Duck");
    }
}
