class MyString
{
    private String str;

    public MyString(String s)
    {
        this.str = s;
    }

    public void rev()
    {
        String nstr = null;

        String[] cArr = str.trim().split("\\s");
        //String mystr = null;
        for(String mystr : cArr)
        {
           // System.out.print(mystr+" : ");
            char cArr2[] = mystr.toCharArray();
            char ch = '\0';
            for(int iTer = 1,i = 0,j = cArr2.length-1; iTer <= mystr.length() /2; i++,j--,iTer++)
            {
                ch = cArr2[j];
                cArr2[j] = cArr2[i];
                cArr2[i] = ch;
            }

            System.out.print(cArr2);
            System.out.print(" ");
        }
        

       // return nstr;
    }
}

class Test
{
    public static void main(String args[])
    {
        MyString s = new MyString("I Love Coding");

        s.rev();
    }
}