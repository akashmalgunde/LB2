class MyString
{
    private String str;

    public MyString(String str)
    {
        this.str = str;
    }

    public void displayNonRepeat()
    {
        int iCnt = 0;

        for(int i = 0; i < this.str.length(); i++)
        {
            iCnt = 0;

            for(int j = 0; j < this.str.length(); j++)
            {
                if(this.str.charAt(i) == this.str.charAt(j))
                    iCnt++;
            }

            if(iCnt == 1)
            {
                System.out.print(this.str.charAt(i)+"  ");
                return;
            }
        }
    }
}

class Test
{
    public static void main(String[] args) 
    {
        MyString m = new MyString("swiss");
        
        m.displayNonRepeat();
    }
}