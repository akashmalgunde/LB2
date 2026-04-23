class Numbers
{
    private int iNo;

    public Numbers(int i)
    {
        this.iNo = i;
    }

    public int calSumOfProperDiv()
    {
        int iSum = 0;

        for(int i = 1; i <= this.iNo/2; i++)
        {
            if(this.iNo % i == 0)
                iSum = iSum + i;
        }

        return iSum;
    }


    public boolean checkPerfect()
    {
        boolean bRet = false;

        if(this.iNo == calSumOfProperDiv())
            bRet = true;

        return bRet;
    }
}

class Test
{
    public static void main(String[] args) 
    {
        Numbers n = new Numbers(6);
        
        if(n.checkPerfect())
            System.out.println("Perfect num");
        else
            System.out.println("Not Perfect");
    }
}