class MyString
{
    private String str;

    public MyString(String str)
    {
        this.str = str;
    }

    int countChar(char ch)
    {
        int iCnt = 0;

        for(int i = 0; i < this.str.length(); i++)
            if(this.str.charAt(i) == ch)
                iCnt++;

        return iCnt;
    }

    public void display()
    {
        for(int i = 0; i < this.str.length(); i++)
        {
            if(countChar(this.str.charAt(i)) == 1)
            {
                System.out.println(this.str.charAt(i));
                break;
            }
        }
    }

}

class Test
{
    public static void main(String args[])
    {
        MyString ms = new MyString("swiss");

        ms.display();
    }
}