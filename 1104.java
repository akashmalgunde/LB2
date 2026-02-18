class Numbers
{
    int iNo;

    public Numbers(int i)
    {
        this.iNo  = i;
    }

    int calculateSquare()
    {
        return this.iNo * iNo;
    }

    int calculateSum(int iNo)
    {
        int iSum = 0;

        while(iNo != 0)
        {
            iSum = iSum + iNo % 10;
            iNo = iNo / 10;
        }

        return iSum;
    }

    boolean checkNeon()
    {
        boolean bRet = false;
        if(this.iNo == calculateSum(calculateSquare()))
            bRet = true;

        return bRet;
    }
}

class Test
{
    public static void main(String args[])
    {
        Numbers n = new Numbers(9);

        if(n.checkNeon())
            System.out.println("Neon Number");
        else
            System.out.println("Not Neon Number");
    }
}