class Digits
{
    int iNo;

    public Digits(int iNo)
    {
        this.iNo = iNo;
    }

    int countDigits()
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

    int countSpecificDigits(int iNo)
    {
        int iCnt = 0;
        int iTemp = 0;
        int iDigit = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iNo == iDigit)
                iCnt++;

            iTemp = iTemp / 10;
        }

        return iCnt;
    }


    boolean checkAtRight(int iNo,int iPos)
    {
        int iTemp = 0;

        boolean bRet = false;

        iTemp = this.iNo;
        int iDigit = 0;

        for(int i = 1; i < iPos; i++)
        {
            iDigit = iTemp % 10;
            iTemp = iTemp / 10;

            if(iDigit == iNo)
            {
                bRet = true;
                break;
            }
        }

        return bRet;
    }

    void displayCount()
    {
        int iTemp = 0;
        int iDigit = 0;
        int iCnt = 0;

        iTemp = this.iNo;

        while(iTemp != 0)
        {
            iCnt++;

            iDigit = iTemp % 10;

            if(!(checkAtRight(iDigit,iCnt)))
            {
                System.out.println(iDigit+"->"+countSpecificDigits(iDigit));
            }

            iTemp = iTemp / 10;
        }
    }
}

class Test
{
    public static void main(String args[])
    {
        Digits d = new Digits(112230);

        d.displayCount();
    }
}