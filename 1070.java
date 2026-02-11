class Number
{
    int iNo;

    public Number(int n)
    {
        this.iNo = n;
    }

    int calculateSquare()
    {
        return this.iNo * this.iNo;
    }

    int countDigit(int iNo)
    {
        int iCnt = 0;

        while(iNo != 0)
        {
            iCnt++;
            iNo = iNo / 10;
        }

        return iCnt;
    }

    int calculatePower(int iCnt)
    {
        int iPower = 1;

        for(int i = 1; i <= iCnt; i++)
        {
            iPower = iPower * 10;
        }

        return iPower;
    }

    int calculateSumSplit(int iNo)
    {
        int iCnt = 0;
        int iPower = 0;
        int iPart1 = 0;
        int iPart2 = 0;
        int iTemp = 0;

        iCnt = countDigit(iNo);

        int iSplit = 0;

        if(iCnt % 2 == 0)
        {
            iSplit = iCnt / 2;
        }
        else
            iSplit = (iCnt / 2) + 1;


        iPower = calculatePower(iSplit);


        iPart1 = iNo % iPower;
        iPart2 = iNo / iPower;

        iTemp = iPart1 + iPart2;

        return iTemp;

    }
    

    boolean checkKarpekar()
    {
        int iNewNum = 0;
        boolean bRet = false;

        iNewNum = calculateSumSplit(calculateSquare());

        if(iNewNum == this.iNo)
            bRet = true;

        return bRet;
    }
}

class Test
{
    public static void main(String args[])
    {
        Number n = new Number(46541);

        if(n.checkKarpekar())
            System.out.println("Karpekar");
        else
            System.out.println("Not Karpekar");
    }
}