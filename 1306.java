class Number
{
    private int iNo;

    public Number(int iNo)
    {
        this.iNo = iNo;
    }

    int calSqr()
    {
        return this.iNo * this.iNo;
    }

    int count()
    {
        int iTemp = this.iNo;
        int iCnt = 0;

        while(iTemp != 0)
        {
            iCnt++;
            iTemp = iTemp / 10;
        }

        return iCnt;
    }

    int calPower(int iCnt)
    {
        int iPower = 1;
        for(int i = 1; i <= iCnt; i++)
        {
            iPower = iPower * 10;
        }
        return iPower;
    }

    boolean checkAutomorphic()
    {
        boolean bRet = false;

        if(this.iNo == (calSqr() % calPower(count())))
            bRet = true;

        return bRet;
    }
}

class Test
{
    public static void main(String[] args) 
    {
        Number n = new Number(2);

        if(n.checkAutomorphic())
            System.out.println("Automorphic");
        else
            System.out.println("Not Automorphic");
    }
}