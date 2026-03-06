class MyString
{
    private String ms;

    public MyString(String ms)
    {
        this.ms = ms;
    }

    public int calculateUpperCase()
    {
        int iCnt = 0;

        for(int i = 0; i < this.ms.length(); i++)
            if(this.ms.charAt(i) >= 'A' &&  this.ms.charAt(i) <= 'Z')
                iCnt++;

        return iCnt;
    }
}

class Test
{
    public static void main(String args[])
    {
        MyString ms = new MyString("HeelLOO WorLD");

        System.out.println(ms.calculateUpperCase());
    }
}