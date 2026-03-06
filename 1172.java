class Test
{
    public static void main(String args[])
    {
        int iNo = 0;

        iNo = 48251;
        int iCnt = 0;
        int iCnt1 = 0;

        int iTemp = 0;

        iTemp = iNo;

        while(iTemp != 0)
        {
            if((iTemp % 10) % 2 == 0)
                iCnt++;
            else 
                iCnt1++;

            iTemp = iTemp / 10;
        }

        System.out.println("Count of even digit in "+iNo+" is: "+iCnt+"and odd count is: "+iCnt1);

    }
}