class MyString 
{
    String s;

    public MyString(String s)
    {
        this.s = s;
    }

    boolean checkDigits()
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
        MyString ms = new MyString("1652165");

        if(ms.checkDigits())
            System.out.println("Contains only digits");
        else
            System.out.println("not Contains only digits");
    }
}