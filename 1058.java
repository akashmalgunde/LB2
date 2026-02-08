
class MyString
{
    String s;

    public MyString(String s)
    {
        this.s = s;
    }

    boolean checkStartWithVowel()
    {
        boolean bRet = false;

        if(this.s.charAt(0) == 'A' || this.s.charAt(0) == 'E' || this.s.charAt(0) == 'I' || this.s.charAt(0) == 'O' || this.s.charAt(0) == 'U' || this.s.charAt(0) == 'a' || this.s.charAt(0) == 'e' || this.s.charAt(0) == 'i' || this.s.charAt(0) == 'o' || this.s.charAt(0) == 'u')
            bRet = true;

        return bRet;
    }
}

class Test
{
    public static void main(String args[])
    {
        MyString ms = new MyString("pineapple");

        if(ms.checkStartWithVowel())
            System.out.println("Start with vowel");
        else
            System.out.println("Not start with vowel");
    }
}

