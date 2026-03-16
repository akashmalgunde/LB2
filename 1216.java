import javax.swing.Icon;

class Numbers
{
    private int iNo;

    public Numbers(int iNo)
    {
        this.iNo = iNo;
    }

    int calculatePower(int iNo,int iCnt)
    {
        int iNum = 1;

        for(int i = 1; i <= iCnt; i++)
        {
            iNum = iNum * iNo;
        }

        return iNum;
    }

    int calculateDigits()
    {
        int iTemp = 0;
        int iCnt = 0;

        iTemp = this.iNo;

        while (iTemp != 0) 
        {
            iTemp = iTemp / 10;
            iCnt++;    
        }

        return iCnt;
    }

    int calculateSum()
    {
        int iTemp = 0;
        int iSum = 0;
        int iCnt = 0;

        iTemp = this.iNo;
        iCnt = calculateDigits();

        while(iTemp != 0)
        {
            iSum = iSum + calculatePower(iTemp%10, iCnt);
            iTemp = iTemp / 10;
            iCnt--;
        }

        return iSum;
    }

    boolean checkDisarium()
    {
        boolean bRet = false;

        if(this.calculateSum() == this.iNo)
            bRet = true;

        return bRet;
    }
}

class Test
{
    public static void main(String args[])
    {
        Numbers n = new Numbers(135);

        if(n.checkDisarium())
            System.out.println("Disarium");
        else
            System.out.println("Not Disarium");
    }
}