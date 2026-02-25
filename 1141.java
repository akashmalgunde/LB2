class Number
{
    int iNo;

    public Number(int i)
    {
        this.iNo = i;
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
            iSum = iNo % 10 + iSum;
            iNo = iNo / 10;
        }

        return iSum;
    }

    boolean checkNeon()
    {
        boolean bRet = true;
    
        if(!(calculateSum(calculateSquare()) == this.iNo))
            bRet = false;

        return bRet;
    }
}

class Test
{
    public static void main(String args[])
    {
        Number n = new Number(9);

        if(n.checkNeon())
            System.out.println("Neon number");
        else
            System.out.println("Not neon");
    }
}