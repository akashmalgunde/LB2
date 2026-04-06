class MyString
{
    private String str;

    public MyString(String s)
    {
        this.str = s;
    }

    public String toggle()
    {
        char[] cArr = this.str.toCharArray();

        for(int i = 0; i < this.str.length(); i++)
        {
            if(cArr[i] >= 'a' && cArr[i] <= 'z')
                cArr[i] = (char)(cArr[i] - 32);
            else if(cArr[i] >= 'A' && cArr[i] <= 'Z')
                cArr[i] = (char)(cArr[i] + 32);
        }

        return new String(cArr);
    } 
}

class Test
{
    public static void main(String args[])
    {
        MyString ms = new MyString("AbCd");

        System.out.println(ms.toggle());
    }
}
