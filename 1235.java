class MyString
{
    private String s;

    public MyString(String s)
    {
        this.s = s;
    }

    boolean isDigit()
    {
        boolean bRet = true;

        for(int i = 0; i < this.s.length(); i++)
        {
            if(!(this.s.charAt(i) >= '0' && this.s.charAt(i) <= '9'))
            {
                bRet = false;
                break;
            }
        }

        return bRet;
    }
}

class Test
{
    public static void main(String args[])
    {
        MyString m = new MyString("1234ajb");

        if(m.isDigit())
            System.out.println("Yes");
        else
            System.out.println("No");
    }
}