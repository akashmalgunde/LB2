class MyString
{
    String s;

    public MyString(String s)
    {
        this.s = s;
    }

    void displayCaseCount()
    {
        int iUpperCnt = 0;
        int iLowerCnt = 0;

        for(int i = 0; i < this.s.length(); i++)
        {
            if(this.s.charAt(i) >= 'A' && this.s.charAt(i) <= 'Z')
                iUpperCnt++;
            else if(this.s.charAt(i) >= 'a' && this.s.charAt(i) <= 'z')
                iLowerCnt++;
        }

        System.out.println("Upper count :"+iUpperCnt+" Lower count :"+iLowerCnt);
    }
}

class Test
{
    public static void main(String args[])
    {
        MyString ms = new MyString(new String("HeLlo"));

        ms.displayCaseCount();
    }
}