class MyString
{
    private String s;

    public MyString(String s)
    {
        this.s = s;
    }

    public int lengthOfStr()
    {
        int iCnt = 0;

        for(int i = 0; i < this.s.length(); i++)
            iCnt++;

        return iCnt;
    }
}

class Test
{
    public static void main(String[] args) {
        MyString ms = new MyString("programming");
        System.out.println(ms.lengthOfStr());
    }
}