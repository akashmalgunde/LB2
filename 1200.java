class MyString
{
    private String ms;

    public MyString(String ms)
    {
        this.ms = ms;
    }

    boolean checkPal()
    {
        int i = 0;
        int j = 0;
        int iIter = 0;

        iIter = this.ms.length();

        j = iIter - 1;

        boolean bRet = true;

        for(int k = 1; k <= iIter /2;k++,i++,j--)
        {
            if(this.ms.charAt(i) != this.ms.charAt(j))
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
        MyString ms = new MyString("madam");

        if(ms.checkPal())
            System.out.println("String is palindrome");
        else
            System.out.println("String is not palindrome");
    }   
}