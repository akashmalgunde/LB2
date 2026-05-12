class MyDigits
{
    private int iNo;

    public MyDigits(int iNo)
    {
        this.iNo = iNo;
    }

    int calLen()
    {
        int iCnt = 0;
        int iTemp = 0;

        iTemp = this.iNo;


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
            iPower = iPower * 10;

        return iPower;
    }


    int calSum()
    {
        int iLast = 0;
        int iFirst = 0;

        iLast = this.iNo % 10;

        iFirst = this.iNo / calPower(calLen()-1);

        return iLast + iFirst;
    }

}

class Test
{
    public static void main(String[] args) {
        MyDigits md = new MyDigits(583274);

        System.out.println(md.calSum());
    }
}