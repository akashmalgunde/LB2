class MyString
{
    private String str;

    public MyString(String str)
    {
        this.str = str;
    }

    public String rev()
    {
        char cArr[] = this.str.toCharArray();
        char cTemp = '\0';

        int i = 0;
        int j = 0;

        for(i = 0, j =this.str.length() - 1; i <= this.str.length()/2; j--,i++)
        {
            cTemp = cArr[i];
            cArr[i] = cArr[j];
            cArr[j] = cTemp;
        }

        return new String(cArr);
    }
}

class Test
{
    public static void main(String args[])
    {
        MyString ms = new MyString("hello");

        System.out.println(ms.rev());
    }
}