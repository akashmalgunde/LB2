class MyString
{
    String s;

    public MyString(String s)
    {
        this.s = s;
    }

    void toggleString()
    {
        char[] newstr = this.s.toCharArray();

        for(int i = 0; i < newstr.length; i++)
        {
            if(newstr[i] >= 'a' && newstr[i] <= 'z')
                newstr[i] = (char)(newstr[i] - 32);
            else if(newstr[i] >= 'A' && newstr[i] <= 'Z')
                newstr[i] = (char)(newstr[i] + 32);
        }

        this.s = new String(newstr);
    }

    public String toString()
    {
        return this.s+"\n";
    }
}

class Test
{
    public static void main(String args[])
    {
        MyString ms = new MyString("HelLO");

        System.out.println(ms);
        ms.toggleString();
        System.out.println(ms);
    }
}