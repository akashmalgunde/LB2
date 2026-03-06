class Test
{
    public static void main(String args[])
    {
        int iNo = 0;

        iNo = 28;

        int iSum = 0;

        for(int i = 1; i <= iNo / 2; i++)
            if(iNo % i == 0)
                iSum = iSum + i;

        //System.out.println(iNo+"and "+iSum);
        if(iNo == iSum)
            System.out.println("Perfect number");
        else
            System.out.println("Not Perfect Number");
    }
}