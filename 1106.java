class Digits
{
    int iNo;

    public Digits(int i)
    {
        this.iNo = i;
    }

    int countDigits(int iNo)
    {
        int iCnt = 0;

        while(iNo != 0)
        {
            iCnt++;
            iNo = iNo / 10;
        }

        return iCnt;
    }

    int powerOf10(int iCnt)
    {
        int iPower = 1;

        for(int i = 1; i <= iCnt; i++)
        {
            iPower = iPower * 10;
        }

        return iPower;
    }

    int reverseFirstLast()
    {
        int iTemp = 0;
        int iPower = 0;

        iTemp = this.iNo / 10;

        iPower = powerOf10(countDigits(iTemp) - 1);

        int iFirst = iTemp / iPower;
        int iLast = this.iNo % 10;

        iTemp = iTemp % iPower;

        iTemp = iTemp * 10 + iFirst;

        int iNewNum = 0;

        iNewNum = iLast * powerOf10(countDigits(this.iNo) - 1);

        iNewNum = iNewNum + iTemp;

        return iNewNum;
    }
}


class Test
{
    public static void main(String args[])
    {
        Digits d = new Digits(6516520);

        int iRet = 0;

        iRet = d.reverseFirstLast();

        System.out.println(iRet);
    }
}