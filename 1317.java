class Digits
{
    private int iNo;

    public Digits(int iNo)
    {
        this.iNo = iNo;
    }

    int calLen()
    {
        int i = 0;

        int iTemp = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            i++;
            iTemp = iTemp / 10;
        }

        return i;
    }


    int calSum()
    {
        int iSum = 0;
        int iTemp = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iSum = iSum + (iTemp % 10);
            iTemp = iTemp / 10;
        }

        return iSum;
    }

    int avg()
    {
        int iAvg = 0;

        iAvg = calSum() / calLen();

        return iAvg;
    }

    void display()
    {
        int iDigit = 0;
        int iTemp = this.iNo;

        int iAvg = 0;

        iAvg = avg();

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;

            if(iDigit > iAvg)
                System.out.print(iDigit+" ");

            iTemp = iTemp / 10;
        }
    }
}

class Test
{
    public static void main(String args[])
    {
        Digits d = new Digits(35241);

        d.display();
    }
}
