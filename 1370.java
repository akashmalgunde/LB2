class Numbers
{
    private int iNo;

    public Numbers(int i)
    {
        this.iNo = i;
    }

    boolean checkPrime()
    {
        boolean bRet = true;

        for(int i = 2; i <= this.iNo/2; i++)
            if(this.iNo % i == 0)
            {
                bRet = false;
                break;
            }

        return bRet;
    }
}

class Test
{
    public static void main(String args[])
    {
        Numbers n = new Numbers(13);

        if(n.checkPrime())
            System.out.println("Prime number");
        else
            System.out.println("Not Prime");
    }
}