class Number
{
    int iNo;

    public Number(int iNo)
    {
        this.iNo = iNo;
    }

    int calculateSquare()
    {
        return this.iNo * iNo;
    }

    int calculateCount()
    {
        int iCnt= 0;
        int iTemp = 0;

        iTemp = this.calculateSquare();

        while(iTemp != 0)
        {
            iCnt++;
            iTemp = iTemp / 10;
        }

        return iCnt;
    }

    int calculateCount(int iNo)
    {
        int iCnt= 0;
        int iTemp = 0;

        iTemp = iNo;

        while(iTemp != 0)
        {
            iCnt++;
            iTemp = iTemp / 10;
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

    int calculateEvenSum()
    {
        int iTemp = this.calculateSquare();
        int iCnt = 0;
        int iPower = 0;
        int iSum = 0;

        System.out.println(iTemp);

        iCnt = this.calculateCount(iTemp);

        iPower = this.calculatePower(iCnt/2);

        iSum = iTemp / iPower + iTemp % iPower;

        return iSum;
    }

    int calculateOddSum()
    {
        int iTemp = this.calculateSquare();  //
        int iCnt = 0;
        int iPower = 0;
        int iSum = 0;

        iCnt = this.calculateCount(iTemp);

        iPower = this.calculatePower(iCnt/2 + 1);

        iSum = iTemp / iPower + iTemp % iPower;

        return iSum;
    }

    boolean checkKarpekar()
    {
        boolean bRet = false;
        int iCnt = 0;

        iCnt = this.calculateCount(this.calculateSquare());

        System.out.println(iCnt);

        if(iCnt % 2 == 0)
        {
            if(this.iNo == this.calculateEvenSum())
                bRet = true;
        }
        else
        {
            if(this.iNo == this.calculateOddSum())
                bRet = true;
        }


        return bRet;
    }
}

class Test
{
    public static void main(String args[])
    {
        Number n = new Number(97);

        if(n.checkKarpekar())
            System.out.println("Karpekar number");
        else 
            System.out.println("Not Karpekar number");
    }
}