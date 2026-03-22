class Digits
{
    private int iNo;

    public Digits(int i)
    {
        this.iNo = i;
    }


    int calculateLength(int iTemp)
    {
        int iCnt = 0;

        while(iTemp != 0)
        {
            iTemp = iTemp / 10;
            iCnt++;
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

    int iRotateRight()
    {
        int iLast = 0;
        int iTemp = 0;

        iTemp = this.iNo;

        iLast = this.iNo % 10;
        iTemp = iTemp /10;

        System.out.println("temp is "+iTemp);

        iLast = iLast * calPower(calculateLength(iTemp));


        iLast = iLast + iTemp;

        return iLast;
    }
}


class Test
{
    public static void main(String args[])
    {
        Digits d = new Digits(5616);

        System.out.println(d.iRotateRight());
    }
}