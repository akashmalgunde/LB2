class Digits
{
    int iNo;

    public Digits(int i)
    {
        this.iNo = i;
    }

    int countDigits()
    {
        int iTemp = 0;
        int iCnt = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iCnt++;
            iTemp = iTemp / 10;
        }

        return iCnt;

    }

    int calculatePower()
    {
        int iCnt = 0;

        int iPower = 1;

        iCnt = countDigits();

        for(int i = 1; i <= iCnt; i++)
        {
            iPower = iPower * 10;
        }

        return iPower;
    }

    int calculateSum()
    {
        //int iSum = 0;

        int iLast = 0;
        int iFirst = 0;

        iLast = this.iNo % 10;
        iFirst = this.iNo / (calculatePower()/10);

        return iLast + iFirst;
    }
}

class Test
{
    public static void main(String args[])
    {
        Digits d = new Digits(41561);

        System.out.println(d.calculateSum());
    }
}