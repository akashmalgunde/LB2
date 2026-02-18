class MyString
{
    String ms;

    public MyString(String s)
    {
        this.ms = s;
    }

    boolean containsOnlyAlphabets()
    {
        boolean bRet = true;

        for(int i = 0; i < this.ms.length(); i++)
        {
            if(!(this.ms.charAt(i) >= 'a' && this.ms.charAt(i) <= 'z' || this.ms.charAt(i) >= 'A' && this.ms.charAt(i) <= 'Z'))
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
            MyString ms = new MyString("HELL");

            if(ms.containsOnlyAlphabets())
                System.out.println("Contains alphabets only");
            else
                System.out.println("Not contains alphabets only");
        }
    }