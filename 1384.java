class MyNumber
{
    private int iNo;

    public MyNumber(int iNo)
    {
        this.iNo = iNo;
    }

    boolean checkBuzz()
    {
        boolean bRet = false;

        if(this.iNo % 7 == 0 || this.iNo % 10 == 7)
            bRet = true;

        return bRet;
    }
}

class Test
{
    public static void main(String args[])
    {
        MyNumber m = new MyNumber(27);

        if(m.checkBuzz())
            System.out.println("Buzz number\n");
        else
            System.out.println("Not Buzz Number\n");
    }
}