class MyString
{
    private String str;

    public MyString(String s)
    {
        this.str = s;
    }

    public int countChar(char ch)
    {
        int iCnt = 0;
        for(int i = 0; i < this.str.length(); i++)
        {
            if(str.charAt(i) == ch)
                iCnt++;
        }

        return iCnt;
    }
}

class Test
{
    public static void main(String[] args) {
        
        MyString ms = new MyString("programming");

        int iCnt = ms.countChar('v');

        if(iCnt != 0)
            System.out.println(iCnt);
        else
            System.out.println("No such character there in string");
    }
}